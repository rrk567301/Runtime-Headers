@interface ABCDContainerPermissions : NSObject

@property (readonly, nonatomic) char canCreateContacts;
@property (readonly, nonatomic) char canDeleteContacts;
@property (readonly, nonatomic) char canCreateGroups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanCreateContacts:(char)a0 canDeleteContacts:(char)a1 canCreateGroups:(char)a2;

@end
