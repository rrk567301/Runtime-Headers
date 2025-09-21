@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel, NSNumber;

@interface GCGenericDeviceModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *productCategory;
@property (readonly, copy) NSString *productName;
@property (readonly, copy, getter=isFormFitting) NSNumber *formFitting;
@property (readonly, copy) GCGenericDeviceDriverModel *driver;
@property (readonly, copy) GCGenericDevicePhysicalInputModel *physicalInput;

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
