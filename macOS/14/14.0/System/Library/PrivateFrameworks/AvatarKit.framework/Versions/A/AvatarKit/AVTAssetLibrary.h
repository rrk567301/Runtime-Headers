@class NSMutableArray, NSMutableDictionary;

@interface AVTAssetLibrary : NSObject {
    NSMutableArray *_assets[38];
    NSMutableDictionary *_assetsByName[38];
}

+ (id)sharedAssetLibrary;

- (void).cxx_destruct;
- (void)reload;
- (id)assetWithType:(long long)a0 identifier:(id)a1;

@end
