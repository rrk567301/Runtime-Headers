@class NSURL;

@interface GDEntityResolutionAssetDownloadRequestResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *filepathURL;
@property (readonly, nonatomic) BOOL isEmbedded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 isEmbedded:(BOOL)a1;
- (BOOL)isEqualToEntityResolutionAssetDownloadRequestResult:(id)a0;

@end
