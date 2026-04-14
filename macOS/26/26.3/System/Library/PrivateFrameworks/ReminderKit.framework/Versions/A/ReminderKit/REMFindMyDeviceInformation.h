@class NSString;

@interface REMFindMyDeviceInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL isMeDevice;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 isMeDevice:(BOOL)a1;

@end
