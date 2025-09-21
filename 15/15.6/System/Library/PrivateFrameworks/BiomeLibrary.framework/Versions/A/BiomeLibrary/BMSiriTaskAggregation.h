@class BMSiriTaskAggregationStatistics, NSString, BMSiriTaskAggregationMetadata, BMSiriTaskAggregationDimensions;

@interface BMSiriTaskAggregation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (readonly, nonatomic) BMSiriTaskAggregationMetadata *metadata;
@property (readonly, nonatomic) BMSiriTaskAggregationStatistics *statistics;
@property (readonly, nonatomic) BMSiriTaskAggregationDimensions *dimensions;
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
- (id)initWithAbsoluteTimestamp:(id)a0 metadata:(id)a1 statistics:(id)a2 dimensions:(id)a3;

@end
