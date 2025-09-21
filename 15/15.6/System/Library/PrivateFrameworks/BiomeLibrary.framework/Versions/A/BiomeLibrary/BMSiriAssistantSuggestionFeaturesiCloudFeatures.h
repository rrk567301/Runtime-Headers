@class NSString;

@interface BMSiriAssistantSuggestionFeaturesiCloudFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int daysSinceAccountCreated;
@property (nonatomic) char hasDaysSinceAccountCreated;
@property (readonly, nonatomic) char isInFamily;
@property (nonatomic) char hasIsInFamily;
@property (readonly, nonatomic) char isHeadOfFamily;
@property (nonatomic) char hasIsHeadOfFamily;
@property (readonly, nonatomic) NSString *subscriptionStatus;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithDaysSinceAccountCreated:(id)a0 isInFamily:(id)a1 isHeadOfFamily:(id)a2 subscriptionStatus:(id)a3;

@end
