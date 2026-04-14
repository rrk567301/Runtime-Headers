@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setExternalID:(id)a0;
- (id)lastName;
- (id)externalID;
- (id)displayName;
- (id)firstName;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)owner;
- (void)setAddress:(id)a0;
- (void)setLastName:(id)a0;
- (void)setOwner:(id)a0;
- (void)setFirstName:(id)a0;
- (id)address;
- (void)setUUID:(id)a0;
- (id)description;
- (void)setDisplayName:(id)a0;
- (id)UUID;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
