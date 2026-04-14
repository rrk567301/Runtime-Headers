@class NSArray, NSString;

@interface BMOasisAnalyticsBlinkSample : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) float medianDurationMs;
@property (nonatomic) BOOL hasMedianDurationMs;
@property (readonly, nonatomic) NSArray *blinkDurations;
@property (readonly, nonatomic) float medianTimeIntervalMs;
@property (nonatomic) BOOL hasMedianTimeIntervalMs;
@property (readonly, nonatomic) NSArray *blinkIntervals;
@property (readonly, nonatomic) float medianBlinkOnsetVelocity;
@property (nonatomic) BOOL hasMedianBlinkOnsetVelocity;
@property (readonly, nonatomic) float medianBlinkOffsetVelocity;
@property (nonatomic) BOOL hasMedianBlinkOffsetVelocity;
@property (readonly, nonatomic) float medianBlinkOpenness;
@property (nonatomic) BOOL hasMedianBlinkOpenness;
@property (readonly, nonatomic) float medianEyelidOpenness;
@property (nonatomic) BOOL hasMedianEyelidOpenness;
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
- (id)_blinkDurationsJSONArray;
- (id)_blinkIntervalsJSONArray;
- (id)initWithCount:(id)a0 medianDurationMs:(id)a1 blinkDurations:(id)a2 medianTimeIntervalMs:(id)a3 blinkIntervals:(id)a4 medianBlinkOnsetVelocity:(id)a5 medianBlinkOffsetVelocity:(id)a6 medianBlinkOpenness:(id)a7 medianEyelidOpenness:(id)a8;

@end
