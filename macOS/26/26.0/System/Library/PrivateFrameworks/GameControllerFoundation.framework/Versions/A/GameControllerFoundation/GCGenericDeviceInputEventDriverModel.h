@class NSNumber, NSSet;

@interface GCGenericDeviceInputEventDriverModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSNumber *gamepadLeftThumbstickDeadzoneRadius;
@property (readonly, copy) NSNumber *gamepadRightThumbstickDeadzoneRadius;
@property (readonly, copy) NSSet *gamepadEventFields;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
