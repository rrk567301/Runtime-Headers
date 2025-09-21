@class NSString, PFPosterEditConfiguration;

@interface PFPosterMedia : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mediaType;
@property (retain, nonatomic) NSString *subpath;
@property (retain, nonatomic) NSString *assetUUID;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0;

@end
