@class NSString, NSSet;

@interface DNDContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSSet *phoneNumbers;
@property (readonly, copy, nonatomic) NSSet *emailAddresses;

+ (id)normalizePhoneNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithContactIdentifier:(id)a0;
- (char)matchesContactHandle:(id)a0;
- (id)diffDescription;
- (char)matchesContact:(id)a0;
- (id)_descriptionForRedacted:(char)a0;
- (id)_initWithContactIdentifier:(id)a0 firstName:(id)a1 middleName:(id)a2 lastName:(id)a3 nickName:(id)a4 organizationName:(id)a5 phoneNumbers:(id)a6 emailAddresses:(id)a7;
- (id)_redactedDescriptionsForStrings:(id)a0;
- (id)normalizedPhoneNumbers;

@end
