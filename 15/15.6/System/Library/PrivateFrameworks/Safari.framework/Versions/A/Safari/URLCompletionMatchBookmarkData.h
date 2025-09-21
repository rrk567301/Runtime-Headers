@class NSString, WebBookmarkLeaf;

@interface URLCompletionMatchBookmarkData : NSObject <WBSURLCompletionMatchData>

@property (readonly, nonatomic) WebBookmarkLeaf *bookmark;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) char containsBookmark;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) char lastVisitWasFailure;
@property (readonly, nonatomic) char visitWasClientError;
@property (readonly, nonatomic) char shouldPreload;
@property (readonly, nonatomic) long long visitCount;
@property (readonly, nonatomic) long long visitCountScore;
@property (readonly, nonatomic) char containsReadingListItem;
@property (readonly, nonatomic) char onlyContainsCloudTab;
@property (readonly, copy, nonatomic) NSString *cloudTabDeviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)a0;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)a0;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)a0;
- (id)matchDataByMergingWithMatchData:(id)a0;
- (char)matchesAutocompleteTrigger:(id)a0 isStrengthened:(char)a1;
- (id)pageTitleAtIndex:(unsigned long long)a0;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)a0;
- (float)topSitesScoreForPageTitleAtTime:(double)a0;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)a0 atTime:(double)a1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)a0;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)a0;
- (long long)visitCountScoreForPageTitleAtTime;
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)a0;
- (id)initWithBookmark:(id)a0 shouldPreload:(char)a1;

@end
