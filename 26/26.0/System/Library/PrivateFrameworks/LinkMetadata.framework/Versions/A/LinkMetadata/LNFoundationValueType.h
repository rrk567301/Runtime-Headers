@class NSString;

@interface LNFoundationValueType : LNValueType

@property (class, readonly, nonatomic) LNFoundationValueType *recurrenceRuleType;

@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;
+ (id)supportedClassesByTypeIdentifier;

- (Class)objectClass;
- (id)initWithTypeIdentifier:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
