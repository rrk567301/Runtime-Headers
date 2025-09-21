@class NSString, NSArray, BMSiriOnDeviceDigestExperimentMetricsISOLocale, BMSiriOnDeviceDigestExperimentMetricsExperimentDigestExperimentTuples;

@interface BMSiriOnDeviceDigestExperimentMetricsExperimentDigest : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *systemBuild;
@property (readonly, nonatomic) int dataSharingOptInStatus;
@property (nonatomic) char hasDataSharingOptInStatus;
@property (readonly, nonatomic) int viewInterface;
@property (nonatomic) char hasViewInterface;
@property (readonly, nonatomic) NSString *audioInterfaceVendorId;
@property (readonly, nonatomic) NSString *audioInterfaceProductId;
@property (readonly, nonatomic) int asrLocation;
@property (nonatomic) char hasAsrLocation;
@property (readonly, nonatomic) int nlLocation;
@property (nonatomic) char hasNlLocation;
@property (readonly, nonatomic) BMSiriOnDeviceDigestExperimentMetricsISOLocale *siriInputLocale;
@property (readonly, nonatomic) NSString *subDomain;
@property (readonly, nonatomic) int responseCategory;
@property (nonatomic) char hasResponseCategory;
@property (readonly, nonatomic) int experimentAllocationStatus;
@property (nonatomic) char hasExperimentAllocationStatus;
@property (readonly, nonatomic) char isTriggered;
@property (nonatomic) char hasIsTriggered;
@property (readonly, nonatomic) char isFirstTriggerOrAfterFirstTrigger;
@property (nonatomic) char hasIsFirstTriggerOrAfterFirstTrigger;
@property (readonly, nonatomic) NSString *codePathIdUUID;
@property (readonly, nonatomic) unsigned int totalTurnCount;
@property (nonatomic) char hasTotalTurnCount;
@property (readonly, nonatomic) unsigned int validTurnCount;
@property (nonatomic) char hasValidTurnCount;
@property (readonly, nonatomic) unsigned int siriTasksStarted;
@property (nonatomic) char hasSiriTasksStarted;
@property (readonly, nonatomic) unsigned int siriTasksCompleted;
@property (nonatomic) char hasSiriTasksCompleted;
@property (readonly, nonatomic) unsigned int flowTasksStarted;
@property (nonatomic) char hasFlowTasksStarted;
@property (readonly, nonatomic) unsigned int flowTasksCompleted;
@property (nonatomic) char hasFlowTasksCompleted;
@property (readonly, nonatomic) unsigned int reliabilityRequestCount;
@property (nonatomic) char hasReliabilityRequestCount;
@property (readonly, nonatomic) unsigned int reliabilityTurnCount;
@property (nonatomic) char hasReliabilityTurnCount;
@property (readonly, nonatomic) unsigned int clientErrorCount;
@property (nonatomic) char hasClientErrorCount;
@property (readonly, nonatomic) unsigned int undesiredResponseCount;
@property (nonatomic) char hasUndesiredResponseCount;
@property (readonly, nonatomic) unsigned int fatalResponseCount;
@property (nonatomic) char hasFatalResponseCount;
@property (readonly, nonatomic) unsigned int failureResponseCount;
@property (nonatomic) char hasFailureResponseCount;
@property (readonly, nonatomic) unsigned int siriUnavailableResponseCount;
@property (nonatomic) char hasSiriUnavailableResponseCount;
@property (readonly, nonatomic) unsigned int usdxSessionCount;
@property (nonatomic) char hasUsdxSessionCount;
@property (readonly, nonatomic) BMSiriOnDeviceDigestExperimentMetricsExperimentDigestExperimentTuples *tuples;
@property (readonly, nonatomic) char isIntelligenceEngineRequest;
@property (nonatomic) char hasIsIntelligenceEngineRequest;
@property (readonly, nonatomic) NSArray *intelligenceEngineRouting;
@property (readonly, nonatomic) unsigned int invocationSource;
@property (nonatomic) char hasInvocationSource;
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
- (id)_intelligenceEngineRoutingJSONArray;
- (id)initWithSystemBuild:(id)a0 dataSharingOptInStatus:(id)a1 viewInterface:(id)a2 audioInterfaceVendorId:(id)a3 audioInterfaceProductId:(id)a4 asrLocation:(id)a5 nlLocation:(id)a6 siriInputLocale:(id)a7 subDomain:(id)a8 responseCategory:(id)a9 experimentAllocationStatus:(id)a10 isTriggered:(id)a11 isFirstTriggerOrAfterFirstTrigger:(id)a12 codePathIdUUID:(id)a13 totalTurnCount:(id)a14 validTurnCount:(id)a15 siriTasksStarted:(id)a16 siriTasksCompleted:(id)a17 flowTasksStarted:(id)a18 flowTasksCompleted:(id)a19 reliabilityRequestCount:(id)a20 reliabilityTurnCount:(id)a21 clientErrorCount:(id)a22 undesiredResponseCount:(id)a23 fatalResponseCount:(id)a24 failureResponseCount:(id)a25 siriUnavailableResponseCount:(id)a26 usdxSessionCount:(id)a27 tuples:(id)a28;
- (id)initWithSystemBuild:(id)a0 dataSharingOptInStatus:(id)a1 viewInterface:(id)a2 audioInterfaceVendorId:(id)a3 audioInterfaceProductId:(id)a4 asrLocation:(id)a5 nlLocation:(id)a6 siriInputLocale:(id)a7 subDomain:(id)a8 responseCategory:(id)a9 experimentAllocationStatus:(id)a10 isTriggered:(id)a11 isFirstTriggerOrAfterFirstTrigger:(id)a12 codePathIdUUID:(id)a13 totalTurnCount:(id)a14 validTurnCount:(id)a15 siriTasksStarted:(id)a16 siriTasksCompleted:(id)a17 flowTasksStarted:(id)a18 flowTasksCompleted:(id)a19 reliabilityRequestCount:(id)a20 reliabilityTurnCount:(id)a21 clientErrorCount:(id)a22 undesiredResponseCount:(id)a23 fatalResponseCount:(id)a24 failureResponseCount:(id)a25 siriUnavailableResponseCount:(id)a26 usdxSessionCount:(id)a27 tuples:(id)a28 isIntelligenceEngineRequest:(id)a29 intelligenceEngineRouting:(id)a30 invocationSource:(id)a31;

@end
