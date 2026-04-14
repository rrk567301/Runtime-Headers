@class PXSharedLibraryDataSource;

@interface PXSharedLibraryDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXSharedLibraryDataSource *dataSource;

+ (id)invitationsDataSourceManagerForType:(long long)a0;
+ (id)currentInvitationsDataSourceManager;
+ (id)keyPathsAffectingCurrentInvitationsDataSourceManager;
+ (id)previewDataSourceManagerForType:(long long)a0;
+ (id)currentPreviewDataSourceManager;
+ (id)keyPathsAffectingCurrentPreviewDataSourceManager;
+ (id)sharedLibraryDataSourceManagerForType:(long long)a0;
+ (id)currentSharedLibraryDataSourceManager;
+ (id)keyPathsAffectingCurrentSharedLibraryDataSourceManager;
+ (id)exitingDataSourceManagerForType:(long long)a0;
+ (id)currentExitingDataSourceManager;
+ (id)keyPathsAffectingCurrentExitingDataSourceManager;

- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (id)fetchExiting;

@end
