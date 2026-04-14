@class ML3StoreItemPlaylistData, ML3StoreItemTrackData;

@interface ML3StoreImportOperation : ML3ImportOperation {
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
}

- (void).cxx_destruct;
- (void)main;
- (unsigned long long)importSource;
- (BOOL)_performImportWithTransaction:(id)a0;
- (BOOL)_importTracksUsingImportSession:(void *)a0;
- (BOOL)_importPlaylistsUsingImportSession:(void *)a0;

@end
