@class NSURL;

@interface PHASEDataBundleAsset : PHASEAsset {
    struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> { struct { struct DataBundle *__ptr_; } ; } _dataBundle;
}

@property (readonly) NSURL *url;

+ (id)new;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)sizeInBytes;
- (id)init;
- (const void *)getDataBundle;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1 weakStringPoolReference:(void *)a2;
- (id)initWithURL:(id)a0 uid:(id)a1 dataBundle:(struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> { struct { struct DataBundle *x0; } x0; })a2 assetRegistry:(id)a3 weakStringPoolReference:(void *)a4;

@end
