@class AVURLAsset, NSError;

@interface ParametricImmersiveAssetInfoPrivate : NSObject {
    void /* unknown type, empty encoding */ primAssetInfo;
}

+ (void)isParametricImmersiveWithAsset:(AVURLAsset *)a0 completionHandler:(void (^)(BOOL))a1;

- (id)init;
- (void).cxx_destruct;
- (void)convertWithAsset:(AVURLAsset *)a0 computeFormatDescription:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;
- (BOOL)getIsAssetConvertible;
- (const struct opaqueCMFormatDescription { } *)getRequiredFormatDescription;

@end
