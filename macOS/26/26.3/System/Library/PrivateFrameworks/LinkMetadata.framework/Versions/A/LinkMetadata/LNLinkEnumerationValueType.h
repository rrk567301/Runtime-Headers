@class NSString;

@interface LNLinkEnumerationValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *enumerationIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEnumerationIdentifier:(id)a0;
- (id)typeIdentifierAsString;

@end
