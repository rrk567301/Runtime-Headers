@class NSData, NSURL, NSError;

@interface RTBluePOITileDownloadResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *downloadKey;
@property (readonly, nonatomic) NSURL *tileURL;
@property (readonly, nonatomic) NSData *tileCacheInfo;
@property (readonly, nonatomic) NSError *downloadError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDownloadKey:(id)a0 tileURL:(id)a1 tileCacheInfo:(id)a2 downloadError:(id)a3;

@end
