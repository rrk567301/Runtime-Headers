@class NSString, NSData;

@interface _DPDiagnosticsAndUsageTransparencyLog : NSObject <_DPTransparencyLog>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *dataSource;
@property (readonly, nonatomic) unsigned long long numDonations;
@property (readonly, nonatomic) NSData *rawSerializedData;
@property (readonly, nonatomic) NSData *serializedData;
@property (readonly, nonatomic) NSString *reportName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertToHexString:(id)a0;
+ (id)formatNoisedData:(id)a0 dimension:(unsigned long long)a1;
+ (id)formatSerializedData:(id)a0;
+ (unsigned long long)inPlaceReplaceOccurrencesOf:(id)a0 with:(id)a1 inBytes:(char *)a2 bytesLength:(unsigned long long)a3 caseSensitiveSearch:(BOOL)a4 repeat:(BOOL)a5;
+ (void)insertIfPossibleObj:(id)a0 intoJSONDictionary:(id)a1 withKey:(id)a2;

- (void).cxx_destruct;
- (id)contentsForDonations:(id)a0 withReportName:(id)a1;
- (id)filterMetadataFieldsInSimplifiedLog:(id)a0;
- (id)initWithDonations:(id)a0 error:(id *)a1;
- (id)jsonRepresentationForMetadataInDonation:(id)a0;
- (id)jsonRepresentationFromParameters:(id)a0;
- (BOOL)writeToDiskWithError:(id *)a0;

@end
