@interface NDDownloadLimits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NDDownloadLimits *defaultLimits;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long minDeviceStorage;
@property (readonly, nonatomic) long long maxDownloadStorage;

- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMinDeviceStorage:(long long)a0 maxDownloadStorage:(long long)a1;

@end
