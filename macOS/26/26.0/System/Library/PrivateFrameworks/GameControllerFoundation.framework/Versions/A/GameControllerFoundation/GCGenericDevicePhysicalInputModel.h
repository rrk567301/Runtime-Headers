@class NSSet;

@interface GCGenericDevicePhysicalInputModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *elements;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
