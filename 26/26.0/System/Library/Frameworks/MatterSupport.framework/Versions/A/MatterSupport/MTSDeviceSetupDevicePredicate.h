@class NSUUID, NSString, NSNumber;

@interface MTSDeviceSetupDevicePredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *uuid;
@property (copy) NSString *serialNumber;
@property (retain) NSNumber *vendorID;
@property (retain) NSNumber *productID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
