@interface EKPersistentColor : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)providerIdentifier;
- (void)setData:(id)a0;
- (void)setProviderIdentifier:(id)a0;
- (id)source;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSource:(id)a0;
- (int)entityType;
- (id)UUID;
- (void)setUUID:(id)a0;
- (void)setExternalID:(id)a0;
- (id)data;
- (id)externalID;
- (BOOL)allowsDeletion;

@end
