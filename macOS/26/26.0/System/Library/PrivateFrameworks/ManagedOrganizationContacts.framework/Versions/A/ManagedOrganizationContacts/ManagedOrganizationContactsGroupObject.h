@class NSString;

@interface ManagedOrganizationContactsGroupObject : ManagedOrganizationContactsRosterObject

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
