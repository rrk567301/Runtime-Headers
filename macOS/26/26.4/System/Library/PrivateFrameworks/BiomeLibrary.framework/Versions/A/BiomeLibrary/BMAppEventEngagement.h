@class NSString;

@interface BMAppEventEngagement : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) BOOL purchased;
@property (nonatomic) BOOL hasPurchased;
@property (readonly, nonatomic) double priceBucket;
@property (nonatomic) BOOL hasPriceBucket;
@property (readonly, nonatomic) double usage;
@property (nonatomic) BOOL hasUsage;
@property (readonly, nonatomic) double frequency;
@property (nonatomic) BOOL hasFrequency;
@property (readonly, nonatomic) double recency;
@property (nonatomic) BOOL hasRecency;
@property (readonly, nonatomic) double normalizedUsage;
@property (nonatomic) BOOL hasNormalizedUsage;
@property (readonly, nonatomic) BOOL eventImpression;
@property (nonatomic) BOOL hasEventImpression;
@property (readonly, nonatomic) BOOL eventClick;
@property (nonatomic) BOOL hasEventClick;
@property (readonly, nonatomic) BOOL appIsDownloaded;
@property (nonatomic) BOOL hasAppIsDownloaded;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithAppId:(id)a0 purchased:(id)a1 priceBucket:(id)a2 usage:(id)a3 frequency:(id)a4 recency:(id)a5 normalizedUsage:(id)a6 eventImpression:(id)a7 eventClick:(id)a8 appIsDownloaded:(id)a9;

@end
