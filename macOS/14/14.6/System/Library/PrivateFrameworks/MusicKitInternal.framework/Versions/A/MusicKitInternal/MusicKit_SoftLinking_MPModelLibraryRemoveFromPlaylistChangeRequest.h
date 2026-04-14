@class MPModelLibraryRemoveFromPlaylistChangeRequest, MPModelPlaylist;

@interface MusicKit_SoftLinking_MPModelLibraryRemoveFromPlaylistChangeRequest : MusicKitInternal_SoftLinking_MPModelLibraryPlaylistRequest {
    MPModelLibraryRemoveFromPlaylistChangeRequest *_underlyingRequest;
    MPModelPlaylist *_underlyingPlaylist;
}

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)a0 entriesToRemove:(id)a1;
- (void)performWithCompletionPolicy:(long long)a0 completionHandler:(id /* block */)a1;

@end
