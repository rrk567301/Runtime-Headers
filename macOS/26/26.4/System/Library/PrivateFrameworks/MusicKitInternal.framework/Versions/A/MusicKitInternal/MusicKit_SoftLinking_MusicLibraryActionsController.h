@protocol MusicKit_SoftLinking_MusicLibraryManager;

@interface MusicKit_SoftLinking_MusicLibraryActionsController : NSObject {
    id<MusicKit_SoftLinking_MusicLibraryManager> _musicLibraryManager;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MusicLibraryActionsController *sharedController;

@property (readonly, nonatomic) long long maximumPinCount;

- (void).cxx_destruct;
- (id)init;
- (void)_addItems:(id)a0 playlist:(id)a1 duplicatePolicy:(long long)a2 completion:(id /* block */)a3;
- (void)_addToLibrary:(id)a0 completion:(id /* block */)a1;
- (void)_deleteFromLibrary:(id)a0 completion:(id /* block */)a1;
- (void)_pinModelObject:(id)a0 completion:(id /* block */)a1;
- (void)_postCloudLibraryStatusChangeNotification;
- (void)_postLibraryDidChangeNotification;
- (void)_unpinModelObject:(id)a0 completion:(id /* block */)a1;
- (struct MusicKit_SoftLinking_DownloadStatus { unsigned long long x0; double x1; })downloadStatusForModelObject:(id)a0;
- (long long)favoriteStatusForModelObject:(id)a0;
- (BOOL)isPinnedModelObject:(id)a0;
- (void)performAddToPlaylistRequest:(id)a0 duplicatePolicy:(long long)a1 completion:(id /* block */)a2;
- (void)performDeleteEntityWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)performFavoriteStateChangeRequest:(id)a0 completion:(id /* block */)a1;
- (void)performLibraryImportChangeWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)performLibraryKeepLocalChangeRequest:(id)a0 completion:(id /* block */)a1;
- (void)performPinChangeRequest:(id)a0 completion:(id /* block */)a1;

@end
