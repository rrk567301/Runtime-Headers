@class NSURL;

@interface AVAssetIdentifier : NSObject <NSCopying> {
    id _assetIdentifier;
    NSURL *_assetURL;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)identifierForURL:(id)a0;
+ (id)identifierForAsset:(id)a0;
+ (id)invalidIdentifier;

- (id)initWithAsset:(id)a0;
- (id)assetURL;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)matchesAsset:(id)a0;

@end
