@class PXPeopleSuggestionsMediaProvider, PXPeopleSuggestionsDataSource;

@interface PXPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (class, readonly) PXPeopleSuggestionsDataSourceManager *sharedLibraryPeopleSuggestionsDataSourceManager;

@property (readonly, nonatomic) PXPeopleSuggestionsDataSource *dataSource;
@property (readonly, copy, nonatomic) PXPeopleSuggestionsMediaProvider *mediaProvider;

- (void)startLoading;
- (char)isLoading;
- (void)cancelLoading;
- (void)boostLoading;

@end
