@class NSURL, NSString;

@interface TRISignedAssetURL : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *signature;

+ (id)assetURLWithUrl:(id)a0 signature:(id)a1;
+ (id)allReferencedCKRecordKeys;
+ (id)assetURLFromCKRecord:(id)a0 assetId:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 signature:(id)a1;
- (id)copyWithReplacementUrl:(id)a0;
- (id)copyWithReplacementSignature:(id)a0;
- (BOOL)isEqualToAssetURL:(id)a0;

@end
