@interface MPModelDownloadedSongCatalogStore : NSObject {
    void /* unknown type, empty encoding */ underlyingCatalogStore;
}

@property (class, nonatomic, readonly) MPModelDownloadedSongCatalogStore *sharedDownloadedSongCatalogStore;

- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)deactivate;

@end
