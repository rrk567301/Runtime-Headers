@class MPModelLibraryTransientStateController;

@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject {
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPModelLibraryTransientStateController *sharedLibraryTransientStateController;

- (void).cxx_destruct;
- (id)_initWithUnderlyingLibraryTransientStateController:(id)a0;
- (void)performAddToPlaylistWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performDeleteEntityWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performLibraryImportChangeWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performLibraryKeepLocalChangeWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
