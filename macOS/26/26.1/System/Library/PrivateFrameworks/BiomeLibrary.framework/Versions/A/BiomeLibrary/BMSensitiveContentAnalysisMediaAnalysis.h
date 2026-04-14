@class NSString;

@interface BMSensitiveContentAnalysisMediaAnalysis : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int contentType;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) int ageGroup;
@property (readonly, nonatomic) int isSensitive;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *trackingVersion;
@property (readonly, nonatomic) int subContentType;
@property (readonly, nonatomic) int harms;
@property (nonatomic) BOOL hasHarms;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)initWithContentType:(id)a0 ageGroup:(int)a1 isSensitive:(int)a2 clientBundleID:(id)a3 trackingVersion:(id)a4 subContentType:(int)a5 harms:(id)a6;

@end
