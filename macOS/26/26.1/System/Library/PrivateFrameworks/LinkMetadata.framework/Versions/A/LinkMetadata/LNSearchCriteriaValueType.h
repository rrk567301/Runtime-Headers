@class NSString;

@interface LNSearchCriteriaValueType : LNValueType

@property (class, readonly, nonatomic) LNSearchCriteriaValueType *stringValueType;

@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;

+ (BOOL)supportsSecureCoding;
+ (id)supportedClassesByTypeIdentifier;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeIdentifier:(long long)a0;
- (BOOL)isEqual:(id)a0;

@end
