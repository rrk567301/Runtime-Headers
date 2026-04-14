@class NSArray, NSMutableDictionary, NSDictionary, NSLocale;

@interface SRAssetBundle : NSObject {
    NSMutableDictionary *_contents;
    NSDictionary *_bundleVersions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contentsLock;
}

@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)assetsWithContentType:(id)a0;
- (id)initWithLocale:(id)a0 bundleVersions:(id)a1;
- (void)loadAssetsWithContentType:(id)a0 contentName:(id)a1 contentPath:(id)a2;
- (BOOL)shouldUpdateForBundleVersions:(id)a0;

@end
