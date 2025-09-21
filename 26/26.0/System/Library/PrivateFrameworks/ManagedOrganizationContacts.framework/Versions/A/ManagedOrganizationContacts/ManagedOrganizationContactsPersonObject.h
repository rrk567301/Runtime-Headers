@class NSString, NSPersonNameComponents;

@interface ManagedOrganizationContactsPersonObject : ManagedOrganizationContactsRosterObject

@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *phoneticGivenName;
@property (retain, nonatomic) NSString *phoneticMiddleName;
@property (retain, nonatomic) NSString *phoneticFamilyName;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
