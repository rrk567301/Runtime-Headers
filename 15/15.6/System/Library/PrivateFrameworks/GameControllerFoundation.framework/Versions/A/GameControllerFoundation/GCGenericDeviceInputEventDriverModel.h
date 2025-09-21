@class NSNumber, NSSet;

@interface GCGenericDeviceInputEventDriverModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSNumber *gamepadLeftThumbstickDeadzoneRadius;
@property (readonly, copy) NSNumber *gamepadRightThumbstickDeadzoneRadius;
@property (readonly, copy) NSSet *gamepadEventFields;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
