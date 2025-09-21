@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char canCreateContacts;
@property (readonly, nonatomic) char canDeleteContacts;
@property (readonly, nonatomic) char canCreateGroups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCanCreateContacts:(char)a0 canDeleteContacts:(char)a1 canCreateGroups:(char)a2;

@end
