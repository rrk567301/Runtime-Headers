@class NSString, MPModelLibraryTransientStateController;

@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject {
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPModelLibraryTransientStateController *sharedLibraryTransientStateController;
@property (class, readonly, nonatomic) NSString *didChangeNotificationName;

- (void)dealloc;
- (void)performOperation:(id)a0;
- (void).cxx_destruct;
- (long long)_libraryTransientFavoriteState:(long long)a0;
- (void)_handleLibraryTransientStateControllerDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingLibraryTransientStateController:(id)a0;
- (long long)_libraryTransientPinState:(long long)a0;
- (long long)_underlyingLibraryTransientFavoriteState:(long long)a0;
- (long long)_underlyingLibraryTransientPinState:(long long)a0;
- (void)performAddToPlaylistWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performDeleteEntityWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performFavoriteStateChangeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performLibraryImportChangeWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performLibraryKeepLocalChangeWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performPinStateChangeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performPlaylistEditChangeRequest:(id)a0 completionPolicy:(long long)a1 completionHandler:(id /* block */)a2;
- (long long)transientFavoriteStateForModelObject:(id)a0;
- (long long)transientPinStateForModelObject:(id)a0;

@end
