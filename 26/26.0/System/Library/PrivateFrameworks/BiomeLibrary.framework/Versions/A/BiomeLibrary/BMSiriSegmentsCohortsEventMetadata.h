@class NSString, BMSiriSegmentsCohortsEventMetadataTimeInterval;

@interface BMSiriSegmentsCohortsEventMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *oddId;
@property (readonly, nonatomic) NSString *deviceAggregationId;
@property (readonly, nonatomic) NSString *userAggregationId;
@property (readonly, nonatomic) unsigned long long eventTimestampInMSSince1970;
@property (nonatomic) BOOL hasEventTimestampInMSSince1970;
@property (readonly, nonatomic) BMSiriSegmentsCohortsEventMetadataTimeInterval *timeInterval;
@property (readonly, nonatomic) unsigned long long userAggregationIdRotationTimestampInMs;
@property (nonatomic) BOOL hasUserAggregationIdRotationTimestampInMs;
@property (readonly, nonatomic) unsigned long long userAggregationIdExpirationTimestampInMs;
@property (nonatomic) BOOL hasUserAggregationIdExpirationTimestampInMs;
@property (readonly, nonatomic) int eventOrigin;
@property (nonatomic) BOOL hasEventOrigin;
@property (readonly, nonatomic) BOOL isLongLivedIDUploadDisabled;
@property (nonatomic) BOOL hasIsLongLivedIDUploadDisabled;
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
- (id)initWithOddId:(id)a0 deviceAggregationId:(id)a1 userAggregationId:(id)a2 eventTimestampInMSSince1970:(id)a3 timeInterval:(id)a4 userAggregationIdRotationTimestampInMs:(id)a5 userAggregationIdExpirationTimestampInMs:(id)a6 eventOrigin:(id)a7 isLongLivedIDUploadDisabled:(id)a8;

@end
