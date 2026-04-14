@class NSString;

@interface SAAppSize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long physicalSize;
@property long long cloneFixUpSize;
@property unsigned long long appCacheSize;
@property unsigned long long cacheDeletePluginSize;
@property BOOL cacheIsPurgeable;
@property unsigned long long fixedSize;
@property unsigned long long dataSize;
@property unsigned long long purgeableSize;
@property unsigned long long cloneSize;
@property (retain) NSString *vendorName;

+ (id)newWithFixedSize:(unsigned long long)a0 andDataSize:(unsigned long long)a1;
+ (id)newWithFixedSize:(unsigned long long)a0 dataSize:(unsigned long long)a1 cloneSize:(unsigned long long)a2 purgeableSize:(unsigned long long)a3 cloneFixUpSize:(long long)a4 physicalSize:(unsigned long long)a5 appCacheSize:(unsigned long long)a6 CDPluginSize:(unsigned long long)a7;

- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFixedSize:(unsigned long long)a0 dataSize:(unsigned long long)a1 cloneSize:(unsigned long long)a2 purgeableSize:(unsigned long long)a3 cloneFixUpSize:(long long)a4 physicalSize:(unsigned long long)a5 appCacheSize:(unsigned long long)a6 CDPluginSize:(unsigned long long)a7;

@end
