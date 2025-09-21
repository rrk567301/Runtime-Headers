@class NSString;

@interface BMSiriTaskAggregationMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int schedule;
@property (readonly, nonatomic) double aggregationWindowStartTimestamp;
@property (nonatomic) BOOL hasAggregationWindowStartTimestamp;
@property (readonly, nonatomic) double aggregationWindowEndTimestamp;
@property (nonatomic) BOOL hasAggregationWindowEndTimestamp;
@property (readonly, nonatomic) NSString *odmId;
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
- (id)initWithSchedule:(int)a0 aggregationWindowStartTimestamp:(id)a1 aggregationWindowEndTimestamp:(id)a2;
- (id)initWithSchedule:(int)a0 aggregationWindowStartTimestamp:(id)a1 aggregationWindowEndTimestamp:(id)a2 odmId:(id)a3;

@end
