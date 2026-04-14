@class NSString, NSSet, GCDevicePhysicalInputSymbolDescription;

@interface GCDevicePhysicalInputElementDescription : GCDevicePhysicalInputViewDescription <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *aliases;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) GCDevicePhysicalInputSymbolDescription *symbol;

+ (id)descriptionWithIdentifier:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validate:(out id *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
