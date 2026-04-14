@class NSString;

@interface LNFoundationValueType : LNValueType

@property (class, readonly, nonatomic) LNFoundationValueType *recurrenceRuleType;
@property (class, readonly, nonatomic) LNFoundationValueType *characterType;

@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;

+ (BOOL)supportsSecureCoding;
+ (id)supportedClassesByTypeIdentifier;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (id)initWithTypeIdentifier:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
