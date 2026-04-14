@class NSString, PXSharedLibraryDataSourceManager;
@protocol PXSharedLibrary;

@interface PXSharedLibraryStatusProvider : PXObservable <PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PXSharedLibraryDataSourceManager *_invitationsDataSourceManager;
    PXSharedLibraryDataSourceManager *_previewDataSourceManager;
    PXSharedLibraryDataSourceManager *_sharedLibraryDataSourceManager;
    PXSharedLibraryDataSourceManager *_exitingDataSourceManager;
}

@property (class, readonly, nonatomic) PXSharedLibraryStatusProvider *sharedInstance;

@property (readonly, nonatomic) BOOL hasPreview;
@property (readonly, nonatomic) BOOL hasSharedLibrary;
@property (readonly, nonatomic) BOOL hasSharedLibraryOrPreview;
@property (readonly, nonatomic) id<PXSharedLibrary> invitation;
@property (readonly, nonatomic) id<PXSharedLibrary> preview;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) id<PXSharedLibrary> exiting;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibraryOrPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setExiting:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)_statusDescription;
- (void)setInvitation:(id)a0;
- (void)setPreview:(id)a0;
- (void)_updatePreview;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (id)fetchExiting;
- (void)setSharedLibrary:(id)a0;
- (void)setHasPreview:(BOOL)a0;
- (void)setHasSharedLibrary:(BOOL)a0;
- (void)_updateInvitation;
- (void)_updateSharedLibrary;
- (void)_updateExiting;
- (void)_configureInvitationDataSourceManager;
- (void)_configurePreviewDataSourceManager;
- (void)_configureSharedLibraryDataSourceManager;
- (void)_configureExitingDataSourceManager;

@end
