@class NSArray, NSString, NSDate;

@interface BMPrivateCloudComputeRequestLog : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *attestations;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *pipelineKind;
@property (readonly, nonatomic) NSString *pipelineParameters;
@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSArray *assets;
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
- (id)_nodesJSONArray;
- (id)_assetsJSONArray;
- (id)_attestationsJSONArray;
- (id)initWithTimestamp:(id)a0 requestId:(id)a1 pipelineKind:(id)a2 pipelineParameters:(id)a3 nodes:(id)a4 assets:(id)a5;

@end
