@class NSString;

@interface ManagedOrganizationContactsClassObject : ManagedOrganizationContactsRosterObject

@property (retain, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
