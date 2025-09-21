@class NSArray, NSString, SFSearchResult;
@protocol SearchUIAsyncSectionLoaderDelegate;

@interface SearchUIAsyncSectionLoader : NSObject

@property (retain) NSArray *objectCache;
@property (readonly) NSString *sectionIdentifier;
@property (weak) id<SearchUIAsyncSectionLoaderDelegate> delegate;
@property (readonly) SFSearchResult *searchResult;
@property (readonly) unsigned long long queryId;

+ (id)asyncLoaderSupportingSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
+ (void)clearGlobalCache;
+ (BOOL)supportsSectionModel:(id)a0;

- (id)backgroundColor;
- (void)start;
- (void).cxx_destruct;
- (id)cachedValue;
- (id)cardSections;
- (id)cacheIdentifier;
- (void)clearLocalCache;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (id)placeholderCardSections;
- (void)preloadIfNecessary;
- (void)reloadWithCardSections:(id)a0 animated:(BOOL)a1 reconfigureExisting:(BOOL)a2;
- (BOOL)supportsPreloading;

@end
