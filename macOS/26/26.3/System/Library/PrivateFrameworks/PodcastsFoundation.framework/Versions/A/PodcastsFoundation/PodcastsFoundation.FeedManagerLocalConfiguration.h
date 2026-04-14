@class _TtC18PodcastsFoundation29FeedManagerLocalConfiguration;

@interface PodcastsFoundation.FeedManagerLocalConfiguration : NSObject {
    void /* unknown type, empty encoding */ deltaNumberOfEpisodesToRequestPerPage;
    void /* unknown type, empty encoding */ _supportsBatchInsertion;
    void /* unknown type, empty encoding */ _workQueueConcurrent;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation29FeedManagerLocalConfiguration *platformSpecificConfiguration;

@property (nonatomic, readonly) BOOL supportsBatchInsertion;
@property (nonatomic, readonly) BOOL workQueueConcurrent;
@property (nonatomic, readonly) double timeoutIntervalForResource;
@property (nonatomic, readonly) long long concurrentDeltaUpdateLimit;
@property (nonatomic, readonly) long long concurrentBootstrapUpdateLimit;
@property (nonatomic, readonly) long long concurrentRSSUpdateLimit;
@property (nonatomic, readonly) BOOL useBackgroundFetchForFeedDownloads;
@property (nonatomic, readonly) BOOL keepsFeedFileInTempDirAfterDownload;
@property (nonatomic, readonly) BOOL usesCleanEpisodeTitles;

- (id)init;
- (void).cxx_destruct;

@end
