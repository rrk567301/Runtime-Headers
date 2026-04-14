@class NSObject, NSString, NSCache, FaviconProviderIconControllerDatabaseStore, NSURL, NSMutableSet, FaviconProviderHistoryBookmarkAdapter;
@protocol OS_dispatch_queue;

@interface FaviconProvider : WBSFaviconProvider <FaviconProviderHistoryBookmarkAdapterDelegate> {
    FaviconProviderIconControllerDatabaseStore *_legacyDatabaseController;
    NSURL *_iconDatabaseURL;
    NSURL *_tempMigrationBasePath;
    NSMutableSet *_knownURLsDuringMigration;
    FaviconProviderHistoryBookmarkAdapter *_historyAndBookmarksAdapter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_monogramTitleToImageCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bookmarksPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_favoritesPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_historyPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_monogramForTitle:(id)a0 url:(id)a1;
- (id)_readingListPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_removeIconControllerSQLiteFilesIfNeeded;
- (id)_tabOverviewPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_topSitesPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)builtInIconForRequest:(id)a0;
- (void)cleanUpAfterPersistenceSetUpDidSucceed:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)fallbackIconForRequest:(id)a0;
- (void)faviconProviderHistoryBookmarkAdapter:(id)a0 didEstablishKnownURLStrings:(id)a1;
- (void)faviconProviderHistoryBookmarkAdapter:(id)a0 didFlushURLString:(id)a1;
- (void)faviconProviderHistoryBookmarkAdapterCouldNotEstablishKnownURLs:(id)a0;
- (void)imageForRequestDuringPersistenceSetUp:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIconDatabasePathURL:(id)a0 persistenceBaseURL:(id)a1 persistenceName:(id)a2 preferredIconSize:(struct CGSize { double x0; double x1; })a3 atScale:(double)a4 allScales:(id)a5 isReadOnly:(BOOL)a6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)a7;
- (void)setUpPersistenceAtPath:(id)a0 completionHandler:(id /* block */)a1;

@end
