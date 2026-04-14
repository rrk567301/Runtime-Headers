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
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
