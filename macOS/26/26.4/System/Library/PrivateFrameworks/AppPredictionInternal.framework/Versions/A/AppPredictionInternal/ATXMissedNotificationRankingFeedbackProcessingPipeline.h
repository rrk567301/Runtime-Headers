@class NSString, ATXEngagementTrackedMissedNotificationRankingBiomeStream;
@protocol BMBookmark;

@interface ATXMissedNotificationRankingFeedbackProcessingPipeline : NSObject {
    id<BMBookmark> _bookmark;
    NSString *_path;
    ATXEngagementTrackedMissedNotificationRankingBiomeStream *_trackedMNRStream;
}

- (BOOL)_fileExistsAtPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_readBookmarkFromPath;
- (void)_writeBookmarkToPath;
- (id)initWithBookmark:(id)a0 path:(id)a1 trackedMNRStream:(id)a2;
- (void)logMetrics;
- (void)logMetricsForRanking:(id)a0;
- (void)logMetricsWithXPCActivity:(id)a0;

@end
