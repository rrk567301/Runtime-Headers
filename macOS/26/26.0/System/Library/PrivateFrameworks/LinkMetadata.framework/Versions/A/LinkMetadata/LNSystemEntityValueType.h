@class NSDictionary, NSString;

@interface LNSystemEntityValueType : LNEntityValueType

@property (class, nonatomic, readonly) NSDictionary *supportedValueTypes;
@property (class, nonatomic, readonly) NSDictionary *supportedValueTypesByEntityIdentifier;

@property (readonly, copy, nonatomic) NSString *contentTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;
+ (id)valueTypeWithIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 contentTypeIdentifier:(id)a2;
- (Class)objectClassSubclass;

@end
