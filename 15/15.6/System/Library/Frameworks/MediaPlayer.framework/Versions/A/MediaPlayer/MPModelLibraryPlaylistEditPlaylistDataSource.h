@class MPMediaLibrary, MPModelPlaylist, MPSectionedCollection, MPPropertySet;

@interface MPModelLibraryPlaylistEditPlaylistDataSource : MPModelLibraryPlaylistEditDataSource {
    MPMediaLibrary *_library;
    MPModelPlaylist *_playlist;
    MPSectionedCollection *_initialTrackList;
    MPPropertySet *_playlistPropertySet;
    char _hasPerformedInitialLoad;
}

- (id)description;
- (void).cxx_destruct;
- (id)_defaultPlaylistEntryPropertySet;
- (id)initWithLibrary:(id)a0 playlist:(id)a1 initialTrackList:(id)a2 playlistEntryProperties:(id)a3;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
