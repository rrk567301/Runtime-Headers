@class NSURL;

@interface AVAssetIdentifier : NSObject <NSCopying> {
    id _assetIdentifier;
    NSURL *_assetURL;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)identifierForURL:(id)a0;
+ (id)identifierForAsset:(id)a0;
+ (id)invalidIdentifier;

- (id)initWithURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;
- (id)assetURL;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)matchesAsset:(id)a0;

@end
