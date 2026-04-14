@class NSString, NSArray;

@interface _DPTransparencyLogCreator : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *reportName;
@property (readonly, nonatomic) NSString *reportNameAcronym;
@property (readonly, nonatomic) NSArray *contents;

+ (id)convertToHexString:(id)a0;
+ (void)insertIfPossibleObj:(id)a0 intoJSONDictionary:(id)a1 withKey:(id)a2;

- (void).cxx_destruct;
- (id)contentsForDonations:(id)a0 withReportName:(id)a1 error:(id *)a2;
- (void)filterFieldsForPrivateEvolutionLogInMetadata:(id)a0;
- (id)initWithDonations:(id)a0 error:(id *)a1;
- (id)jsonRepresentationForMetadataInDonation:(id)a0;
- (id)jsonRepresentationFromParameters:(id)a0;
- (id)serializedContentsWithError:(id *)a0;
- (BOOL)writeToDiskWithError:(id *)a0;

@end
