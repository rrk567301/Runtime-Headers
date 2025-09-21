@class ATXMLActionProducer, ATXUpdatePredictionsSources, ATXServer, ATXUpdatePredictionsLogger, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUpdatePredictionsManager : NSObject

@property (readonly, nonatomic) ATXMLActionProducer *actionProducer;
@property (readonly, nonatomic) ATXUpdatePredictionsSources *updateSources;
@property (readonly, nonatomic) ATXUpdatePredictionsLogger *updatePredictionsLogger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) ATXServer *atxServer;

+ (id)sharedInstance;
+ (id)homeScreenPageConfigs;
+ (BOOL)shouldOverrideRefreshRateForDisabledConsumerSubTypesForReason:(unsigned long long)a0;

- (id)documentConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)actionConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)initWithATXServer:(id)a0 actionProducer:(id)a1 updateSources:(id)a2 updatePredictionsLogger:(id)a3;
- (id)appConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void)processSpotlightDocumentFeedbackNoSync;
- (id)init;
- (void)processSpotlightAppFeedback;
- (void)processAppDirectoryFeedback;
- (void)refreshDocumentPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)logPredictionUpdatesForBoxedAppConsumerSubTypes:(id)a0 actionConsumerSubTypes:(id)a1 reason:(unsigned long long)a2;
- (void)processLockscreenFeedback;
- (void)refreshActionPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (id)_stringArrayFromBoxedConsumerSubTypeArray:(id)a0;
- (void)updateBehavioralPredictionsIfOlderThan:(double)a0 reason:(unsigned long long)a1;
- (void)processSpotlightAppFeedbackNoSync;
- (void)refreshAppPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)processAppDirectoryFeedbackNoSync;
- (void)processHomeScreenFeedback;
- (void)processSpotlightActionFeedbackNoSync;
- (id)disabledConsumerSubTypesWithHomeScreenPageConfigs:(id)a0;
- (void)processHomeScreenFeedbackNoSync;
- (void)processSpotlightActionFeedback;
- (id)disabledConsumerSubTypes;
- (void)processLockscreenFeedbackNoSync;
- (void).cxx_destruct;

@end
