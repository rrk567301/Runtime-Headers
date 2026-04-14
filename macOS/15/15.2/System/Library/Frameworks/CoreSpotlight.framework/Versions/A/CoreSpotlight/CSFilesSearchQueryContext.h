@interface CSFilesSearchQueryContext : CSSearchQueryContext

@property (nonatomic) BOOL ignoreTopNForAggregation;
@property (nonatomic) BOOL matchesSupportFiles;
@property (nonatomic) BOOL matchesOnlyFinderFiles;
@property (nonatomic) unsigned long long maxPerGroup;
@property (nonatomic) unsigned long long maxFirstDelay;
@property (nonatomic) unsigned long long maxFirstCount;
@property (nonatomic) unsigned long long maxProgressDelay;
@property (nonatomic) unsigned long long maxProgressCount;
@property (nonatomic) unsigned long long maxUpdateDelay;
@property (nonatomic) unsigned long long maxUpdateCount;


@end
