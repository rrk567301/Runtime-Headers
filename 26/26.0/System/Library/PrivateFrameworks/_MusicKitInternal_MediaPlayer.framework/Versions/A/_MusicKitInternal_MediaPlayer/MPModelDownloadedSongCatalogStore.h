@interface MPModelDownloadedSongCatalogStore : NSObject {
    void /* unknown type, empty encoding */ underlyingCatalogStore;
}

@property (class, nonatomic, readonly) MPModelDownloadedSongCatalogStore *sharedDownloadedSongCatalogStore;

- (id)init;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;

@end
