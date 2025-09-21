@interface EKPersistentColor : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)providerIdentifier;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (void)setSource:(id)a0;
- (void)setData:(id)a0;
- (int)entityType;
- (id)externalID;
- (void)setProviderIdentifier:(id)a0;
- (id)data;
- (id)source;
- (void)setExternalID:(id)a0;
- (BOOL)allowsDeletion;

@end
