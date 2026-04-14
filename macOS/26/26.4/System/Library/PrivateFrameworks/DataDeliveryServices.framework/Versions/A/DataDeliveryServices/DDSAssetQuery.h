@class DDSAttributeFilter, NSString;

@interface DDSAssetQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DDSAttributeFilter *filter;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *cacheKey;
@property BOOL localOnly;
@property BOOL installedOnly;
@property BOOL latestOnly;
@property BOOL cachedOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dumpDescription;
- (id)initWithAssetType:(id)a0 filter:(id)a1 localOnly:(BOOL)a2 installedOnly:(BOOL)a3 latestOnly:(BOOL)a4 cachedOnly:(BOOL)a5;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAssetQuery:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetType:(id)a0 filter:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
