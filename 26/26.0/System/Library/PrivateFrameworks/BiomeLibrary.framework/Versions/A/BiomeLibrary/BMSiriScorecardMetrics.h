@class NSString, BMSiriScorecardMetricsEventMetadata, NSArray, BMSiriScorecardMetricsISOLocale;

@interface BMSiriScorecardMetrics : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriScorecardMetricsEventMetadata *eventMetadata;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) int programCode;
@property (nonatomic) BOOL hasProgramCode;
@property (readonly, nonatomic) int productId;
@property (nonatomic) BOOL hasProductId;
@property (readonly, nonatomic) NSString *systemBuild;
@property (readonly, nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (readonly, nonatomic) int viewInterface;
@property (nonatomic) BOOL hasViewInterface;
@property (readonly, nonatomic) NSString *audioInterfaceVendorId;
@property (readonly, nonatomic) NSString *audioInterfaceProductId;
@property (readonly, nonatomic) int asrLocation;
@property (nonatomic) BOOL hasAsrLocation;
@property (readonly, nonatomic) int nlLocation;
@property (nonatomic) BOOL hasNlLocation;
@property (readonly, nonatomic) BMSiriScorecardMetricsISOLocale *siriInputLocale;
@property (readonly, nonatomic) BMSiriScorecardMetricsISOLocale *dictationLocale;
@property (readonly, nonatomic) NSString *subDomain;
@property (readonly, nonatomic) unsigned int totalTurnCount;
@property (nonatomic) BOOL hasTotalTurnCount;
@property (readonly, nonatomic) unsigned int validTurnCount;
@property (nonatomic) BOOL hasValidTurnCount;
@property (readonly, nonatomic) unsigned int siriTasksStarted;
@property (nonatomic) BOOL hasSiriTasksStarted;
@property (readonly, nonatomic) unsigned int siriTasksCompleted;
@property (nonatomic) BOOL hasSiriTasksCompleted;
@property (readonly, nonatomic) unsigned int flowTasksStarted;
@property (nonatomic) BOOL hasFlowTasksStarted;
@property (readonly, nonatomic) unsigned int flowTasksCompleted;
@property (nonatomic) BOOL hasFlowTasksCompleted;
@property (readonly, nonatomic) unsigned int reliabilityRequestCount;
@property (nonatomic) BOOL hasReliabilityRequestCount;
@property (readonly, nonatomic) unsigned int reliabilityTurnCount;
@property (nonatomic) BOOL hasReliabilityTurnCount;
@property (readonly, nonatomic) unsigned int clientErrorCount;
@property (nonatomic) BOOL hasClientErrorCount;
@property (readonly, nonatomic) unsigned int undesiredResponseCount;
@property (nonatomic) BOOL hasUndesiredResponseCount;
@property (readonly, nonatomic) unsigned int fatalResponseCount;
@property (nonatomic) BOOL hasFatalResponseCount;
@property (readonly, nonatomic) unsigned int failureResponseCount;
@property (nonatomic) BOOL hasFailureResponseCount;
@property (readonly, nonatomic) unsigned int siriUnavailableResponseCount;
@property (nonatomic) BOOL hasSiriUnavailableResponseCount;
@property (readonly, nonatomic) NSString *siriResponseId;
@property (readonly, nonatomic) unsigned int responseCategory;
@property (nonatomic) BOOL hasResponseCategory;
@property (readonly, nonatomic) BOOL isIntelligenceEngineRequest;
@property (nonatomic) BOOL hasIsIntelligenceEngineRequest;
@property (readonly, nonatomic) NSArray *intelligenceEngineRouting;
@property (readonly, nonatomic) unsigned int invocationSource;
@property (nonatomic) BOOL hasInvocationSource;
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
- (id)_intelligenceEngineRoutingJSONArray;
- (id)initWithEventMetadata:(id)a0 deviceType:(id)a1 programCode:(id)a2 productId:(id)a3 systemBuild:(id)a4 dataSharingOptInStatus:(id)a5 viewInterface:(id)a6 audioInterfaceVendorId:(id)a7 audioInterfaceProductId:(id)a8 asrLocation:(id)a9 nlLocation:(id)a10 siriInputLocale:(id)a11 dictationLocale:(id)a12 subDomain:(id)a13 totalTurnCount:(id)a14 validTurnCount:(id)a15 siriTasksStarted:(id)a16 siriTasksCompleted:(id)a17 flowTasksStarted:(id)a18 flowTasksCompleted:(id)a19 reliabilityRequestCount:(id)a20 reliabilityTurnCount:(id)a21 clientErrorCount:(id)a22 undesiredResponseCount:(id)a23 fatalResponseCount:(id)a24 failureResponseCount:(id)a25 siriUnavailableResponseCount:(id)a26 siriResponseId:(id)a27 responseCategory:(id)a28 isIntelligenceEngineRequest:(id)a29 intelligenceEngineRouting:(id)a30 invocationSource:(id)a31;

@end
