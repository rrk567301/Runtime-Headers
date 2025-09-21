@class NSString, BMTextUnderstandingPoemAnalyticsFeatures;

@interface BMTextUnderstandingPoemAnalytics : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *visualIdentifier;
@property (readonly, nonatomic) char prediction;
@property (nonatomic) char hasPrediction;
@property (readonly, nonatomic) char named;
@property (nonatomic) char hasNamed;
@property (readonly, nonatomic) char shadowMatch;
@property (nonatomic) char hasShadowMatch;
@property (readonly, nonatomic) double threshold;
@property (nonatomic) char hasThreshold;
@property (readonly, nonatomic) double predictionConfidence;
@property (nonatomic) char hasPredictionConfidence;
@property (readonly, nonatomic) char onboarding;
@property (nonatomic) char hasOnboarding;
@property (readonly, nonatomic) NSString *nameMegadomeIdentifier;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) BMTextUnderstandingPoemAnalyticsFeatures *features;
@property (readonly, nonatomic) char accepted;
@property (nonatomic) char hasAccepted;
@property (readonly, nonatomic) char rejected;
@property (nonatomic) char hasRejected;
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
- (id)initWithVisualIdentifier:(id)a0 prediction:(id)a1 named:(id)a2 shadowMatch:(id)a3 threshold:(id)a4 predictionConfidence:(id)a5 onboarding:(id)a6 nameMegadomeIdentifier:(id)a7 nameSource:(int)a8 features:(id)a9 accepted:(id)a10 rejected:(id)a11;

@end
