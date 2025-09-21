@class PHPhotoLibrary, NSString, PXSharedLibraryDataSourceManager;
@protocol PXSharedLibrary;

@interface PXSharedLibraryStatusProvider : PXObservable <PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deferredInitializationLock;
    PXSharedLibraryDataSourceManager *_invitationsDataSourceManager;
    PXSharedLibraryDataSourceManager *_previewDataSourceManager;
    PXSharedLibraryDataSourceManager *_sharedLibraryDataSourceManager;
    PXSharedLibraryDataSourceManager *_exitingDataSourceManager;
}

@property (nonatomic) char isInitialized;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) char hasPreview;
@property (readonly, nonatomic) char hasSharedLibrary;
@property (readonly, nonatomic) char hasSharedLibraryOrPreview;
@property (readonly, nonatomic) id<PXSharedLibrary> invitation;
@property (readonly, nonatomic) id<PXSharedLibrary> preview;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) id<PXSharedLibrary> exiting;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibraryOrPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLibraryStatusProviderWithPhotoLibrary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setExiting:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)_statusDescription;
- (void)setInvitation:(id)a0;
- (void)setPreview:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_configureExitingDataSourceManager;
- (void)_configureInvitationDataSourceManager;
- (void)_configurePreviewDataSourceManager;
- (void)_configureSharedLibraryDataSourceManager;
- (void)_fullfillDeferredInitializationIfNecessary;
- (void)_initializeDataSourceManagers;
- (void)_performDeferredInitializationIfNecessary;
- (void)_updateExitingWithChangeNotification:(char)a0;
- (void)_updateInvitationReceivedDateWithIdentifier:(id)a0;
- (void)_updateInvitationWithChangeNotification:(char)a0;
- (void)_updatePreviewWithChangeNotification:(char)a0;
- (void)_updateSharedLibraryWithChangeNotification:(char)a0;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPhotoLibrary:(id)a0 deferInitialization:(char)a1 initialHasPreview:(char)a2 initialHasSharedLibrary:(char)a3;
- (void)setHasPreview:(char)a0;
- (void)setHasSharedLibrary:(char)a0;
- (void)setSharedLibrary:(id)a0;

@end
