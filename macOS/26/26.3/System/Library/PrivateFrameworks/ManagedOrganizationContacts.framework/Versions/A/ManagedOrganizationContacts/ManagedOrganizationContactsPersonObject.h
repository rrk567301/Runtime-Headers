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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
