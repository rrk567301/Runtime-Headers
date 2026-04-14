@class ATXMLActionProducer, ATXUpdatePredictionsSources, ATXServer, ATXUpdatePredictionsLogger, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUpdatePredictionsManager : NSObject

@property (readonly, nonatomic) ATXMLActionProducer *actionProducer;
@property (readonly, nonatomic) ATXUpdatePredictionsSources *updateSources;
@property (readonly, nonatomic) ATXUpdatePredictionsLogger *updatePredictionsLogger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) ATXServer *atxServer;

+ (id)sharedInstance;
+ (BOOL)shouldOverrideRefreshRateForDisabledConsumerSubTypesForReason:(unsigned long long)a0;
+ (id)homeScreenPageConfigs;

- (void)processSpotlightActionFeedbackNoSync;
- (id)initWithATXServer:(id)a0 actionProducer:(id)a1 updateSources:(id)a2 updatePredictionsLogger:(id)a3;
- (void)processHomeScreenFeedbackNoSync;
- (id)_stringArrayFromBoxedConsumerSubTypeArray:(id)a0;
- (void)processSpotlightDocumentFeedbackNoSync;
- (id)appConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void)processAppDirectoryFeedback;
- (id)documentConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void)refreshDocumentPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)processSpotlightAppFeedback;
- (void)refreshAppPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)processHomeScreenFeedback;
- (id)disabledConsumerSubTypes;
- (void)updateBehavioralPredictionsIfOlderThan:(double)a0 reason:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)disabledConsumerSubTypesWithHomeScreenPageConfigs:(id)a0;
- (void)refreshActionPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (id)actionConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)init;
- (void)processSpotlightActionFeedback;
- (void)processLockscreenFeedbackNoSync;
- (void)logPredictionUpdatesForBoxedAppConsumerSubTypes:(id)a0 actionConsumerSubTypes:(id)a1 reason:(unsigned long long)a2;
- (void)processAppDirectoryFeedbackNoSync;
- (void)processLockscreenFeedback;
- (void)processSpotlightAppFeedbackNoSync;

@end
