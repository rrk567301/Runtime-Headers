@class BMOasisAnalyticsDeviceWornType, NSString, BMOasisAnalyticsQualityTrace, BMOasisAnalyticsMetadata;

@interface BMOasisAnalyticsDeviceWornEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMOasisAnalyticsQualityTrace *qualityTrace;
@property (readonly, nonatomic) BMOasisAnalyticsMetadata *metadata;
@property (readonly, nonatomic) BMOasisAnalyticsDeviceWornType *payload;
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
- (id)initWithQualityTrace:(id)a0 metadata:(id)a1 payload:(id)a2;

@end
