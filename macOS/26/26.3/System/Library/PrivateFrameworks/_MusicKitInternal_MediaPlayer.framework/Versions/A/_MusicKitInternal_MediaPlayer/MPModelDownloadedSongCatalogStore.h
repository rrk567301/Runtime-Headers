@interface MPModelDownloadedSongCatalogStore : NSObject {
    void /* unknown type, empty encoding */ underlyingCatalogStore;
}

@property (class, nonatomic, readonly) MPModelDownloadedSongCatalogStore *sharedDownloadedSongCatalogStore;

- (id)init;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activate;

@end
