@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes {
    unsigned long long _face;
}

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long face;

- (id)init;
- (void)specifyAllFaces;
- (char)doesSpecifyAllFaces;

@end
