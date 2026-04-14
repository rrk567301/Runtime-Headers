@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOwner:(id)a0;
- (id)UUID;
- (id)displayName;
- (id)address;
- (void)setAddress:(id)a0;
- (id)owner;
- (void)setUUID:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)firstName;
- (id)lastName;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (id)externalID;
- (void)setExternalID:(id)a0;
- (int)entityType;
- (int)shareeStatusRaw;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (BOOL)shareeMuteRemoval;
- (void)setShareeMuteRemoval:(BOOL)a0;

@end
