@class NSString;

@interface BMPeopleSuggesterEventLevelMetrics : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *indexSelected;
@property (readonly, nonatomic) NSString *engagedSuggestionProxyReason;
@property (readonly, nonatomic) NSString *engagedSuggestionProxy;
@property (readonly, nonatomic) NSString *engagedSuggestionProxyDebug;
@property (readonly, nonatomic) BOOL airdropShown;
@property (nonatomic) BOOL hasAirdropShown;
@property (readonly, nonatomic) BOOL airdropEngaged;
@property (nonatomic) BOOL hasAirdropEngaged;
@property (readonly, nonatomic) BOOL sharePlayAvailable;
@property (nonatomic) BOOL hasSharePlayAvailable;
@property (readonly, nonatomic) BOOL sharePlayEngaged;
@property (nonatomic) BOOL hasSharePlayEngaged;
@property (readonly, nonatomic) BOOL appSharingIntent;
@property (nonatomic) BOOL hasAppSharingIntent;
@property (readonly, nonatomic) NSString *engagementType;
@property (readonly, nonatomic) BOOL suggestionAvailable;
@property (nonatomic) BOOL hasSuggestionAvailable;
@property (readonly, nonatomic) NSString *suggestionNumber;
@property (readonly, nonatomic) NSString *numberOfVisibleSuggestions;
@property (readonly, nonatomic) BOOL peopleSuggestionsSetting;
@property (nonatomic) BOOL hasPeopleSuggestionsSetting;
@property (readonly, nonatomic) NSString *transportApp;
@property (readonly, nonatomic) NSString *sourceApp;
@property (readonly, nonatomic) NSString *contentShared;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *userExperienceFlow;
@property (readonly, nonatomic) unsigned int sessionLatency;
@property (nonatomic) BOOL hasSessionLatency;
@property (readonly, nonatomic) BOOL modelTimeout;
@property (nonatomic) BOOL hasModelTimeout;
@property (readonly, nonatomic) NSString *suggestionPath;
@property (readonly, nonatomic) NSString *suggestionPathDebug;
@property (readonly, nonatomic) NSString *trialDeploymentId;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) BOOL isPhotos;
@property (nonatomic) BOOL hasIsPhotos;
@property (readonly, nonatomic) BOOL PSRActive;
@property (nonatomic) BOOL hasPSRActive;
@property (readonly, nonatomic) unsigned int sessionDelayInMilliseconds;
@property (nonatomic) BOOL hasSessionDelayInMilliseconds;
@property (readonly, nonatomic) NSString *datestamp;
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
- (id)initWithIndexSelected:(id)a0 engagedSuggestionProxyReason:(id)a1 engagedSuggestionProxy:(id)a2 engagedSuggestionProxyDebug:(id)a3 airdropShown:(id)a4 airdropEngaged:(id)a5 sharePlayAvailable:(id)a6 sharePlayEngaged:(id)a7 appSharingIntent:(id)a8 engagementType:(id)a9 suggestionAvailable:(id)a10 suggestionNumber:(id)a11 numberOfVisibleSuggestions:(id)a12 peopleSuggestionsSetting:(id)a13 transportApp:(id)a14 sourceApp:(id)a15 contentShared:(id)a16 sessionId:(id)a17 userExperienceFlow:(id)a18 sessionLatency:(id)a19 modelTimeout:(id)a20 suggestionPath:(id)a21 suggestionPathDebug:(id)a22 trialDeploymentId:(id)a23 trialExperimentId:(id)a24 trialTreatmentId:(id)a25 isPhotos:(id)a26 PSRActive:(id)a27 sessionDelayInMilliseconds:(id)a28 datestamp:(id)a29;

@end
