@class ML3StoreItemPlaylistData, ML3StoreItemAlbumArtistData, ML3StoreItemTrackData;

@interface ML3StoreImportOperation : ML3ImportOperation {
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
    ML3StoreItemAlbumArtistData *_albumArtistData;
}

- (void).cxx_destruct;
- (void)main;
- (unsigned long long)importSource;
- (char)_importAlbumArtistsUsingImportSession:(void *)a0;
- (char)_importPlaylistsUsingImportSession:(void *)a0;
- (char)_importTracksUsingImportSession:(void *)a0;
- (char)_performImportWithTransaction:(id)a0;

@end
