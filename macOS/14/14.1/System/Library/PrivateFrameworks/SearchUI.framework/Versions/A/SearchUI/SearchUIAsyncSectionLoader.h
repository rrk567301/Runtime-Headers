@class SearchUISectionModel, NSArray, SFSearchResult, SFColor;
@protocol SearchUIAsyncSectionLoaderDelegate;

@interface SearchUIAsyncSectionLoader : NSObject

@property (copy) id /* block */ runningBlock;
@property (retain) NSArray *objectCache;
@property (weak) id<SearchUIAsyncSectionLoaderDelegate> delegate;
@property (readonly, weak) SearchUISectionModel *sectionModel;
@property (readonly) SFSearchResult *searchResult;
@property (readonly) SFColor *backgroundColor;
@property (readonly) unsigned long long queryId;

+ (id)asyncLoaderSupportingSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
+ (BOOL)supportsSectionModel:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (id)cachedValue;
- (id)cardSections;
- (id)cacheIdentifier;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (id)placeholderCardSections;
- (void)preloadIfNecessary;
- (void)reloadWithCardSections:(id)a0 animated:(BOOL)a1 reconfigureExisting:(BOOL)a2;
- (BOOL)supportsPreloading;

@end
