@class WBSSearchParameters;

@interface WBSResultRanker : NSObject

@property (class, retain, nonatomic) WBSSearchParameters *searchParameters;

+ (id)filterOutUnlikelyMatchesFromMatches:(id)a0 forQuery:(id)a1 rewrittenQuery:(id)a2;
+ (BOOL)allowLooserMatching:(id)a0;
+ (id)_visibleURLtoDisplayedURL:(id)a0;
+ (id)_dropQueryPart:(id)a0;
+ (id)_simplifyURLForHistoryDedupe:(id)a0 withMobile:(BOOL)a1;
+ (void)_trackTitlesAndURLs:(id)a0 withMobile:(BOOL)a1 withBase:(id)a2 withSimplified:(id)a3;
+ (void)_trackTitleAndURLSingle:(id)a0 withMobile:(BOOL)a1 withBase:(id)a2 withSimplified:(id)a3;
+ (BOOL)_shouldDedupeResult:(id)a0 withMobile:(BOOL)a1 withBase:(id)a2 withSimplified:(id)a3;
+ (id)dedupeSameTitleHistoryResults:(id)a0 withMobile:(BOOL)a1 withTophits:(id)a2 withTabs:(id)a3;
+ (id)dedupeSameTitleHistoryResults:(id)a0 withMobile:(BOOL)a1 withTophits:(id)a2 withTabs:(id)a3 cloudTabs:(id)a4;
+ (id)filterDuplicateTopHits:(id)a0;
+ (BOOL)matchNavigationIsClientOrServerError:(id)a0;
+ (BOOL)includeBookmarksAndHistory:(id)a0;

@end
