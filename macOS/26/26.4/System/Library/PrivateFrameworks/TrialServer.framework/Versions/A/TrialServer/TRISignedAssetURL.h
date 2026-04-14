@class NSURL, NSString;

@interface TRISignedAssetURL : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *signature;

+ (id)allReferencedCKRecordKeys;
+ (id)assetURLFromCKRecord:(id)a0 assetId:(id *)a1;
+ (id)assetURLWithUrl:(id)a0 signature:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)copyWithReplacementSignature:(id)a0;
- (id)copyWithReplacementUrl:(id)a0;
- (id)initWithUrl:(id)a0 signature:(id)a1;
- (BOOL)isEqualToAssetURL:(id)a0;

@end
