@class NSURL, ATXBiomeSuggestedHomePageStream;

@interface ATXHomeScreenFocusSuggestionLogger : NSObject

@property (retain, nonatomic) ATXBiomeSuggestedHomePageStream *stream;
@property (retain, nonatomic) NSURL *suggestedHomePageStreamBookmarkURLPath;

- (void).cxx_destruct;
- (id)init;
- (id)generateSuggestedHomePageStreamBookmark;
- (id)generateSuggestedHomePageStreamBookmarkURLPath;
- (void)logHomeScreenFocusSuggestionMetrics;
- (void)writeBookmarkToFile:(id)a0;

@end
