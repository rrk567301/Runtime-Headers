@class NSArray;

@interface FCReadingHistorySyncResults : NSObject {
    NSArray *_modifiedArticleIDs;
    NSArray *_deletedArticleIDs;
    NSArray *_newlyCreatedArticleIDs;
    NSArray *_articleExposures;
}

- (void).cxx_destruct;

@end
