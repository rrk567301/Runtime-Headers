@class NSURL;

@interface AVAssetIdentifier : NSObject <NSCopying> {
    id _assetIdentifier;
    NSURL *_assetURL;
}

@property (readonly, nonatomic, getter=isValid) char valid;

+ (id)identifierForURL:(id)a0;
+ (id)identifierForAsset:(id)a0;
+ (id)invalidIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)assetURL;
- (char)matchesAsset:(id)a0;

@end
