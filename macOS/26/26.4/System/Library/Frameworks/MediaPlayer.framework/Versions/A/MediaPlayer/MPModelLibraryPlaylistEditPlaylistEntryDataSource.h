@class NSArray;

@interface MPModelLibraryPlaylistEditPlaylistEntryDataSource : MPModelLibraryPlaylistEditDataSource {
    NSArray *_playlistEntries;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithPlaylistEntries:(id)a0;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
