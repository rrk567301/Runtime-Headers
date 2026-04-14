@class NSURL;

@interface GDEntityResolutionAssetDownloadRequestResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *filepathURL;
@property (readonly, nonatomic) BOOL isEmbedded;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 isEmbedded:(BOOL)a1;
- (BOOL)isEqualToEntityResolutionAssetDownloadRequestResult:(id)a0;

@end
