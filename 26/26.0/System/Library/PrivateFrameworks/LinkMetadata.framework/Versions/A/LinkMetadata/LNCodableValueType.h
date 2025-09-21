@class NSDictionary, NSString, LNTypeDisplayRepresentation;

@interface LNCodableValueType : LNValueType

@property (class, nonatomic, readonly) NSDictionary *supportedValueTypes;

@property (readonly, copy, nonatomic) NSString *contentTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;
@property (readonly, copy, nonatomic) LNTypeDisplayRepresentation *displayRepresentation;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;
+ (id)codableValueTypeWithIdentifier:(id)a0;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 availabilityAnnotations:(id)a2 contentTypeIdentifier:(id)a3;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 availabilityAnnotations:(id)a2 contentTypeIdentifier:(id)a3 displayRepresentation:(id)a4;
- (Class)objectClassSubclass;

@end
