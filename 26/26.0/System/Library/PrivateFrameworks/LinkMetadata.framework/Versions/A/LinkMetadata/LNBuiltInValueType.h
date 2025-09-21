@interface LNBuiltInValueType : LNValueType

@property (class, readonly, nonatomic) LNBuiltInValueType *intentToggleOperationValueType;
@property (class, readonly, nonatomic) LNBuiltInValueType *intentToggleStateValueType;
@property (class, readonly, nonatomic) LNBuiltInValueType *photoItemCollectionValueType;

@property (readonly, nonatomic) long long builtInType;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;
+ (id)supportedClassesByTypeIdentifier;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithBuiltInType:(long long)a0;
- (id)typeIdentifierAsString;

@end
