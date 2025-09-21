@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject

@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (nonatomic) char shouldShowAlternateHeadlines;

+ (char)isDebugModeEnabled;

- (void).cxx_destruct;
- (id)_headlineMetadataFromTitle:(id)a0 fromExperimentalTitles:(id)a1 forArticleID:(id)a2;
- (id)_debugHeadlineMetadataFromTitle:(id)a0 fromExperimentalTitles:(id)a1 forArticleID:(id)a2;
- (id)headlineMetadataFromTitle:(id)a0 fromExperimentalTitles:(id)a1 forArticleID:(id)a2;
- (id)initWithShouldShowAlternateHeadlines:(char)a0;
- (id)metadataForDefaultHeadlineWithTitle:(id)a0;

@end
