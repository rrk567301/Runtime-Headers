@class NSUUID, NSString, BiometricKitAccessoryGroup;

@interface BiometricKitAccessory : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) BiometricKitAccessoryGroup *group;
@property (nonatomic) unsigned int flags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAccessory:(id)a0;

@end
