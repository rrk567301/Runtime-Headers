@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject

@property (readonly, nonatomic) NSURLSession *session;

+ (id)preferredStreamFromMasterPlaylist:(id)a0;

- (void).cxx_destruct;
- (void)getRacGUIDFromMasterPlaylistURL:(id)a0 completion:(id /* block */)a1;
- (id)initCanUseCellularData:(char)a0 powerRequired:(char)a1 bundleID:(id)a2;
- (id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)a0 completion:(id /* block */)a1;

@end
