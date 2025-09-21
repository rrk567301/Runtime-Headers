@class NSString;

@interface BMSiriUserEngagementStatisticsAccumulatedAggregationStatsAggregatedStats : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int triggeredMechanism;
@property (readonly, nonatomic) int requestCount;
@property (nonatomic) BOOL hasRequestCount;
@property (readonly, nonatomic) int intendedRequestCount;
@property (nonatomic) BOOL hasIntendedRequestCount;
@property (readonly, nonatomic) int unintendedRequestCount;
@property (nonatomic) BOOL hasUnintendedRequestCount;
@property (readonly, nonatomic) double intendedRequestRatio;
@property (nonatomic) BOOL hasIntendedRequestRatio;
@property (readonly, nonatomic) double triggeredMechanismRequestRatio;
@property (nonatomic) BOOL hasTriggeredMechanismRequestRatio;
@property (readonly, nonatomic) NSString *modelVersion;
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
- (id)initWithTriggeredMechanism:(int)a0 requestCount:(id)a1 intendedRequestCount:(id)a2 unintendedRequestCount:(id)a3 intendedRequestRatio:(id)a4 triggeredMechanismRequestRatio:(id)a5 modelVersion:(id)a6;

@end
