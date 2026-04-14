@class MPModelPlaylistEntry;

@interface MPModelLibraryPlaylistEditPlaylistEntryDataSource : MPModelLibraryPlaylistEditDataSource {
    MPModelPlaylistEntry *_playlistEntry;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithPlaylistEntry:(id)a0;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
