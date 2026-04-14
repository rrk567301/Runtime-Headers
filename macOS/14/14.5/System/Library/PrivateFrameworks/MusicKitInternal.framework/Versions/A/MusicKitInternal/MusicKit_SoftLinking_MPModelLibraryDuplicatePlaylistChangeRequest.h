@class MPModelLibraryDuplicatePlaylistChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryDuplicatePlaylistChangeRequest : MusicKitInternal_SoftLinking_MPModelLibraryPlaylistRequest {
    MPModelLibraryDuplicatePlaylistChangeRequest *_underlyingChangeRequest;
}

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)a0;
- (void)performWithCompletionPolicy:(long long)a0 completionHandler:(id /* block */)a1;

@end
