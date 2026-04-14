@interface MPModelDownloadedSongCatalogStore : NSObject {
    void /* unknown type, empty encoding */ underlyingCatalogStore;
}

@property (class, nonatomic, readonly) MPModelDownloadedSongCatalogStore *sharedDownloadedSongCatalogStore;

- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (id)init;

@end
