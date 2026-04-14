@class NSString, NSArray, NSNumber;

@interface GCGenericDevicePhysicalInputElementModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSArray *names;
@property (readonly, copy, getter=isAnalog) NSNumber *analog;
@property (readonly, copy) NSString *localizedNameKey;
@property (readonly, copy) NSString *symbolName;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)debugDescription;
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
