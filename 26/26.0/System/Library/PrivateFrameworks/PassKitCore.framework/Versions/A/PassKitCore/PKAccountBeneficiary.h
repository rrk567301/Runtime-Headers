@class NSDecimalNumber, NSString, CNContact;

@interface PKAccountBeneficiary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSDecimalNumber *allocation;
@property (readonly, nonatomic) unsigned long long relationshipType;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)displayableRelationshipString;

@end
