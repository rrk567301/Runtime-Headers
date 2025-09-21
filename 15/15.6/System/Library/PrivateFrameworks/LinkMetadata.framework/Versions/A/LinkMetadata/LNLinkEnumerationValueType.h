@class NSString;

@interface LNLinkEnumerationValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *enumerationIdentifier;

+ (char)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)objectClass;
- (id)initWithEnumerationIdentifier:(id)a0;
- (id)typeIdentifierAsString;

@end
