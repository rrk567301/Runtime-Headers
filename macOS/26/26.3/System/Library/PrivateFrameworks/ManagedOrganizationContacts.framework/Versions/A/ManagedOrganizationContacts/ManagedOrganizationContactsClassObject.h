@class NSString;

@interface ManagedOrganizationContactsClassObject : ManagedOrganizationContactsRosterObject

@property (retain, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
