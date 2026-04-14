@class NSString;

@interface BMAutonamingAccuracyFedStats : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) int inferenceOutputType;
@property (readonly, nonatomic) int inferenceAccuracy;
@property (readonly, nonatomic) int aggregatedInferenceContributingCount;
@property (nonatomic) BOOL hasAggregatedInferenceContributingCount;
@property (readonly, nonatomic) double aggregatedInferenceConfidence;
@property (nonatomic) BOOL hasAggregatedInferenceConfidence;
@property (readonly, nonatomic) int aggregatedInferenceAccuracy;
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
- (id)initWithModelVersion:(id)a0 inferenceOutputType:(int)a1 inferenceAccuracy:(int)a2 aggregatedInferenceContributingCount:(id)a3 aggregatedInferenceConfidence:(id)a4 aggregatedInferenceAccuracy:(int)a5;

@end
