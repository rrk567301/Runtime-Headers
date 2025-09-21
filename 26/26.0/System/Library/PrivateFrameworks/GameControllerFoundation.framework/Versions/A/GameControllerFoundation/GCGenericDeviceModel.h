@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel, NSNumber;

@interface GCGenericDeviceModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *productCategory;
@property (readonly, copy) NSString *productName;
@property (readonly, copy, getter=isFormFitting) NSNumber *formFitting;
@property (readonly, copy) GCGenericDeviceDriverModel *driver;
@property (readonly, copy) GCGenericDevicePhysicalInputModel *physicalInput;

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
