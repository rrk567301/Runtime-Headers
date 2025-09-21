@class NSString, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_source, OS_dispatch_queue, SPCustomFeedbackSender;

@interface PRSAnonymousPipelineManager : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property char isInternalDevice;
@property (retain, nonatomic) NSString *lastTopHitQueryString;
@property (retain, nonatomic) NSArray *lastTopHitQueryItems;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *topHitDataCollectionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char submissionEnabled;
@property (retain, nonatomic) id<SPCustomFeedbackSender> delegate;

+ (id)sharedManager;
+ (id)dateFormatter;
+ (char)_dataCollectionAllowedForBundle:(id)a0;
+ (id)allowedBundles;
+ (id)candidateLogsBasePath;
+ (id)candidateLogsURLForBundle:(id)a0;
+ (id)dateFromFileURL:(id)a0;
+ (id)engagementCountForDateKeyForBundle:(id)a0;
+ (id)engagementCountKeyForBundle:(id)a0;
+ (id)engagementDateKeyForBundle:(id)a0;
+ (id)logURLForCurrentTimeAndBundle:(id)a0 forEngagement:(char)a1;
+ (id)relativePositionKey;
+ (id)submittedLogsURL;
+ (id)submittedLogsURLForUser:(id)a0;
+ (id)submitttedSpotlightReportsError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)queryWillFinishWithItems:(id)a0 forClient:(id)a1 forQuery:(id)a2 anonymousDataCollectionAllowed:(char)a3;
- (void)cleanUp;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)a0 withItems:(id)a1 withRanker:(id)a2 forQuery:(id)a3 dataCollectAllowed:(char)a4 queryID:(id)a5 withCEPData:(id)a6 forClientBundle:(id)a7 debugInfoEnabled:(char)a8 keyboardPrimaryLanguage:(id)a9 clientID:(id)a10;
- (void)setFeedbackDelegate:(id)a0;
- (id)_abandonedItemsFromItems:(id)a0 withIndexOfEngagedItem:(unsigned long long)a1;
- (void)_addQueryInfoToJSONWriter:(struct json_writer { } *)a0 withQuery:(id)a1 cepData:(id)a2 forClient:(id)a3 debugInfoAllowed:(char)a4 keyboardPrimaryLanguage:(id)a5;
- (void)_addRelativePositionToFeatureDict:(id)a0 relativePosition:(id)a1 forItem:(id)a2 debugInfoEnabled:(char)a3;
- (void)_extractTrainingSamplesForQuery:(id)a0 withIndexOfEngagedItem:(unsigned long long)a1 withItems:(id)a2 withRanker:(id)a3 withCEPData:(id)a4 forClientBundle:(id)a5 debugInfoEnabled:(char)a6 keyboardPrimaryLanguage:(id)a7;
- (void)_increaseUserDefaultsEngagementCountForBundle:(id)a0;
- (void)_increaseUserDefaultsEngagementCountForDateWithClientBundle:(id)a0;
- (id)_relativePositionForItem:(id)a0 inItems:(id)a1 withIndexOfEngagedItem:(long long)a2 forClientBundle:(id)a3;
- (char)_shouldDataCollectForEngagementReservoirSamplingForClientBundle:(id)a0;
- (char)_shouldDataCollectWithEngagedBundle:(id)a0 withQueryId:(id)a1 forClientBundle:(id)a2;
- (void)_updateUserDefaultsWithEngagedBundle:(id)a0 andQueryID:(id)a1 forClientBundle:(id)a2;
- (void)_writeResult:(struct json_writer { } *)a0 item:(id)a1;
- (char)dateIsExpired:(id)a0;
- (void)deleteCandidateLogs;
- (void)deleteExpiredSubmittedLogs;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)a0 withItems:(id)a1 withRanker:(id)a2 forQuery:(id)a3 dataCollectAllowed:(char)a4 forClientBundle:(id)a5 keyboardPrimaryLanguage:(id)a6 clientID:(id)a7;
- (void)registerXPCActivity;
- (id)retrieveFeedbackURLToSendInDirectory:(id)a0;
- (void)sendMLFeedbackActivity:(id)a0 clientID:(id)a1;
- (void)userEngagedItemWithIdentifier:(id)a0 forBundle:(id)a1 forQuery:(id)a2;

@end
