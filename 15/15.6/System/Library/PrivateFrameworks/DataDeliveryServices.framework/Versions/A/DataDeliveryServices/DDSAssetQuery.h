@class DDSAttributeFilter, NSString;

@interface DDSAssetQuery : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) DDSAttributeFilter *filter;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *cacheKey;
@property char localOnly;
@property char installedOnly;
@property char latestOnly;
@property char cachedOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetType:(id)a0 filter:(id)a1;
- (id)dumpDescription;
- (id)initWithAssetType:(id)a0 filter:(id)a1 localOnly:(char)a2 installedOnly:(char)a3 latestOnly:(char)a4 cachedOnly:(char)a5;
- (char)isEqualToAssetQuery:(id)a0;

@end
