@class NSSet, NSUUID;

@interface HMAccessorySettingConstraint : NSObject <NSSecureCoding, NSCopying> {
    unsigned char _identifierUUIDBytes[16];
}

@property (class, readonly, copy) NSSet *supportedValueClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly, copy) id value;

+ (id)shortDescription;

- (id)initWithType:(long long)a0 value:(id)a1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 value:(id)a2;

@end
