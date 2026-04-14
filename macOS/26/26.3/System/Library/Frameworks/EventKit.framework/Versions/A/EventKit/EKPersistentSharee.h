@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setFirstName:(id)a0;
- (void)setAddress:(id)a0;
- (void)setDisplayName:(id)a0;
- (void)setOwner:(id)a0;
- (id)displayName;
- (void)setExternalID:(id)a0;
- (id)UUID;
- (id)firstName;
- (id)address;
- (id)description;
- (void)setLastName:(id)a0;
- (void)setUUID:(id)a0;
- (id)externalID;
- (id)lastName;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)entityType;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
