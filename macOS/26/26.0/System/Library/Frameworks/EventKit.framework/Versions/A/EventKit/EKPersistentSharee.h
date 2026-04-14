@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setAddress:(id)a0;
- (void)setLastName:(id)a0;
- (void)setOwner:(id)a0;
- (id)UUID;
- (void)setFirstName:(id)a0;
- (id)firstName;
- (id)lastName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (id)displayName;
- (void)setDisplayName:(id)a0;
- (id)owner;
- (id)address;
- (int)entityType;
- (id)description;
- (id)externalID;
- (void)setExternalID:(id)a0;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
