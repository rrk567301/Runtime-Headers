@class NSArray, ATXUniversalBiomeUIStream, NSURL, ATXBMBookmark;

@interface ATXSuggestedPagesHomeScreenModificationsMetricsLogger : NSObject

@property (retain, nonatomic) ATXUniversalBiomeUIStream *stream;
@property (retain, nonatomic) NSArray *acceptedEventTypes;
@property (retain, nonatomic) NSURL *bookmarkURLPath;
@property (retain, nonatomic) ATXBMBookmark *atxBookmark;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStream:(id)a0 bookmarkURLPath:(id)a1;
- (id)generateBookmark;
- (id)generateBookmarkURLPath;
- (long long)logMetrics;
- (void)writeBookmarkToFile:(id)a0;

@end
