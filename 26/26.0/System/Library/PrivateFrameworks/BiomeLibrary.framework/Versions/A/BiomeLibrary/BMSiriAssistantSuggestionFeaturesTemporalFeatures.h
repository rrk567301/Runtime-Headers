@class NSString;

@interface BMSiriAssistantSuggestionFeaturesTemporalFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int timeOfDay;
@property (nonatomic) BOOL hasTimeOfDay;
@property (readonly, nonatomic) int dayOfWeek;
@property (nonatomic) BOOL hasDayOfWeek;
@property (readonly, nonatomic) int timePeriod;
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
- (id)initWithTimeOfDay:(id)a0 dayOfWeek:(id)a1 timePeriod:(int)a2;

@end
