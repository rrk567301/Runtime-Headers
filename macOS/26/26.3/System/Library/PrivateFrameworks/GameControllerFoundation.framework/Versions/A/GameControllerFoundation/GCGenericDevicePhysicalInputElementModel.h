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
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
