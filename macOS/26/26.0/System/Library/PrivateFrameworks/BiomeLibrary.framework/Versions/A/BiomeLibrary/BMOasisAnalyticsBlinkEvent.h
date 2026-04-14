@class BMOasisAnalyticsBlinkSample, NSString, BMOasisAnalyticsQualityTrace, BMOasisAnalyticsMetadata;

@interface BMOasisAnalyticsBlinkEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMOasisAnalyticsMetadata *metadata;
@property (readonly, nonatomic) BMOasisAnalyticsBlinkSample *payload;
@property (readonly, nonatomic) BMOasisAnalyticsQualityTrace *qualityTrace;
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
- (id)initWithMetadata:(id)a0 payload:(id)a1 qualityTrace:(id)a2;

@end
