@class NSArray;

@interface MPModelLibraryPlaylistEditTrackDataSource : MPModelLibraryPlaylistEditDataSource {
    NSArray *_playlistEntries;
    NSArray *_tracks;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithTrackObjects:(id)a0 authorProfile:(id)a1;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
