@class NSArray;

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}

- (void).cxx_destruct;
- (void)main;
- (unsigned long long)importSource;
- (char)_importPlaylistsUsingImportSession:(void *)a0;
- (char)_importTracksUsingImportSession:(void *)a0;
- (char)_performImportWithTransaction:(id)a0;

@end
