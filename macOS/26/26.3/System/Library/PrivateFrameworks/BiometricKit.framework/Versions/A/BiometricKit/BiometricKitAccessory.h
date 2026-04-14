@class NSUUID, NSString, BiometricKitAccessoryGroup;

@interface BiometricKitAccessory : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) BiometricKitAccessoryGroup *group;
@property (nonatomic) unsigned int flags;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAccessory:(id)a0;

@end
