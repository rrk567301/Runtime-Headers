@class NSUUID;
@protocol NSSecureCoding, NSCopying;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly, copy) id<NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (id)supportedValueClasses;

- (id)initWithType:(long long)a0 value:(id)a1;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
