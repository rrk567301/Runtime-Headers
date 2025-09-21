@class NSString, NSDate;

@interface HKDeviceContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *currentOSName;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } currentOSVersion;
@property (readonly, copy, nonatomic) NSString *productTypeName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) char representsLocalDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 localDevice:(char)a1 productTypeName:(id)a2 currentOSName:(id)a3 currentOSVersion:(struct { long long x0; long long x1; long long x2; })a4 modificationDate:(id)a5;

@end
