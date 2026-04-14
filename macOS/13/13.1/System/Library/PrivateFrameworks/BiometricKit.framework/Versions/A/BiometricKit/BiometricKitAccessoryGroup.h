@class NSUUID, NSString;

@interface BiometricKitAccessoryGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAccessoryGroup:(id)a0;

@end
