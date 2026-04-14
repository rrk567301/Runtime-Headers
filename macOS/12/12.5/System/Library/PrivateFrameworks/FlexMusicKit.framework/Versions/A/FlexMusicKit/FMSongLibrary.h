@class FlexReachability, NSMutableDictionary, NSDictionary, NSMutableSet, NSArray, NSMutableArray, FlexCloudManager;

@interface FMSongLibrary : NSObject

@property (retain, nonatomic) NSMutableArray *songs;
@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSMutableDictionary *songsByUID;
@property (retain, nonatomic) NSMutableSet *assetsInFlight;
@property (retain, nonatomic) FlexCloudManager *cloudManager;
@property (retain, nonatomic) FlexReachability *flexReachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic) BOOL contactedCloud;
@property (retain, nonatomic) NSArray *bundledSongs;
@property (readonly, nonatomic) BOOL networkingIsDisabled;

+ (id)sharedLibraryWithOptions:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_setupReachability;
- (id)fetchSongWithUID:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (id)fetchSongsWithOptions:(id)a0;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)a0;
- (void)_updateFromCloud;
- (id)_registerSongs:(id)a0;
- (void)cancelDownloadOfAllAssets;
- (void)_createCloudManager;
- (void)_loadBundledSongs;
- (void)_loadCachedSongs;
- (void)_notifySongsChanged:(id)a0;
- (void)_downloadProgressChanged:(id)a0;
- (void)_notifySongDownloadInProgressChanged:(BOOL)a0;
- (void)networkStatusChanged:(id)a0;
- (id)registerSongBundleAtPath:(id)a0;
- (void)unregisterSongWithID:(id)a0;
- (BOOL)supportForCloud;

@end
