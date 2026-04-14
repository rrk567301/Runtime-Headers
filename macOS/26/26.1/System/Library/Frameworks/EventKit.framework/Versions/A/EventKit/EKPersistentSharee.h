@interface EKPersistentSharee : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (void)setAddress:(id)a0;
- (id)displayName;
- (void)setUUID:(id)a0;
- (id)address;
- (void)setOwner:(id)a0;
- (id)firstName;
- (id)owner;
- (id)lastName;
- (void)setLastName:(id)a0;
- (void)setDisplayName:(id)a0;
- (void)setFirstName:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)externalID;
- (id)UUID;
- (void)setExternalID:(id)a0;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
