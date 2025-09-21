@class NSString, NSArray;

@interface BMSpanEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *testKey;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *trialDeploymentId;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) NSString *traceId;
@property (readonly, nonatomic) NSString *parentSpanId;
@property (readonly, nonatomic) NSString *spanId;
@property (readonly, nonatomic) unsigned int privatizedStartTime;
@property (nonatomic) BOOL hasPrivatizedStartTime;
@property (readonly, nonatomic) unsigned int privatizedEndTime;
@property (nonatomic) BOOL hasPrivatizedEndTime;
@property (readonly, nonatomic) unsigned int intervalInMilliSeconds;
@property (nonatomic) BOOL hasIntervalInMilliSeconds;
@property (readonly, nonatomic) NSString *errorString;
@property (readonly, nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) unsigned int startMemoryLevelInKB;
@property (nonatomic) BOOL hasStartMemoryLevelInKB;
@property (readonly, nonatomic) unsigned int endMemoryLevelInKB;
@property (nonatomic) BOOL hasEndMemoryLevelInKB;
@property (readonly, nonatomic) unsigned int memoryLevelDeltaInKB;
@property (nonatomic) BOOL hasMemoryLevelDeltaInKB;
@property (readonly, nonatomic) NSString *gcdQueueName;
@property (readonly, nonatomic) NSString *qosClassName;
@property (readonly, nonatomic) NSString *relativePriority;
@property (readonly, nonatomic) NSString *projectName;
@property (readonly, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) NSArray *infoEvents;
@property (readonly, nonatomic) NSArray *warningEvents;
@property (readonly, nonatomic) NSArray *debugEvents;
@property (readonly, nonatomic) NSArray *errorEvents;
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
- (id)_attributesJSONArray;
- (id)_debugEventsJSONArray;
- (id)_errorEventsJSONArray;
- (id)_infoEventsJSONArray;
- (id)_warningEventsJSONArray;
- (id)initWithDeviceIdentifier:(id)a0 testKey:(id)a1 version:(id)a2 name:(id)a3 trialDeploymentId:(id)a4 trialExperimentId:(id)a5 trialTreatmentId:(id)a6 traceId:(id)a7 parentSpanId:(id)a8 spanId:(id)a9 privatizedStartTime:(id)a10 privatizedEndTime:(id)a11 intervalInMilliSeconds:(id)a12 errorString:(id)a13 errorCode:(id)a14 processName:(id)a15 startMemoryLevelInKB:(id)a16 endMemoryLevelInKB:(id)a17 memoryLevelDeltaInKB:(id)a18 gcdQueueName:(id)a19 qosClassName:(id)a20 relativePriority:(id)a21 projectName:(id)a22 attributes:(id)a23 infoEvents:(id)a24 warningEvents:(id)a25 debugEvents:(id)a26 errorEvents:(id)a27;

@end
