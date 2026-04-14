@class NSString;

@interface SAAppSize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long physicalSize;
@property long long cloneFixUpSize;
@property unsigned long long appCacheSize;
@property unsigned long long cacheDeletePluginSize;
@property BOOL cacheIsPurgeable;
@property unsigned long long stagedSize;
@property unsigned long long fixedSize;
@property unsigned long long dataSize;
@property unsigned long long purgeableSize;
@property unsigned long long cloneSize;
@property (retain) NSString *vendorName;

+ (id)sizeWithDataSize:(unsigned long long)a0 purgeableSize:(unsigned long long)a1;
+ (id)sizeWithFixedSize:(unsigned long long)a0 andDataSize:(unsigned long long)a1;
+ (id)sizeWithFixedSize:(unsigned long long)a0 dataSize:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)addAppSize:(id)a0;
- (id)withAppCacheSize:(unsigned long long)a0;
- (id)withCacheDeletePluginSize:(unsigned long long)a0;
- (id)withCloneFixUpSize:(long long)a0;
- (id)withCloneSize:(unsigned long long)a0;
- (id)withDataSize:(unsigned long long)a0;
- (id)withFixedSize:(unsigned long long)a0;
- (id)withPhysicalSize:(unsigned long long)a0;
- (id)withPurgeableSize:(unsigned long long)a0;

@end
