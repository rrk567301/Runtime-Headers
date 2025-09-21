@class NSString;

@interface BMSiriAssistantSuggestionFeaturesiCloudFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int daysSinceAccountCreated;
@property (nonatomic) BOOL hasDaysSinceAccountCreated;
@property (readonly, nonatomic) BOOL isInFamily;
@property (nonatomic) BOOL hasIsInFamily;
@property (readonly, nonatomic) BOOL isHeadOfFamily;
@property (nonatomic) BOOL hasIsHeadOfFamily;
@property (readonly, nonatomic) NSString *subscriptionStatus;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDaysSinceAccountCreated:(id)a0 isInFamily:(id)a1 isHeadOfFamily:(id)a2 subscriptionStatus:(id)a3;

@end
