@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager

- (id)createInitialDataSource;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (id)fetchExiting;

@end
