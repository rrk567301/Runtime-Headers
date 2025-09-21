@class NSString;

@interface SAAppSize : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long physicalSize;
@property unsigned long long FSPurgeableSize;
@property unsigned long long appCacheSize;
@property unsigned long long cacheDeletePluginSize;
@property unsigned long long fixedSize;
@property unsigned long long dataSize;
@property unsigned long long purgeableSize;
@property unsigned long long cloneSize;
@property (retain) NSString *vendorName;

+ (id)newWithFixedSize:(unsigned long long)a0 andDataSize:(unsigned long long)a1;
+ (id)newWithFixedSize:(unsigned long long)a0 dataSize:(unsigned long long)a1 cloneSize:(unsigned long long)a2 purgeableSize:(unsigned long long)a3 FSPurgeableSize:(unsigned long long)a4 physicalSize:(unsigned long long)a5 appCacheSize:(unsigned long long)a6 CDPluginSize:(unsigned long long)a7;

- (id)copy;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFixedSize:(unsigned long long)a0 dataSize:(unsigned long long)a1 cloneSize:(unsigned long long)a2 purgeableSize:(unsigned long long)a3 FSPurgeableSize:(unsigned long long)a4 physicalSize:(unsigned long long)a5 appCacheSize:(unsigned long long)a6 CDPluginSize:(unsigned long long)a7;

@end
