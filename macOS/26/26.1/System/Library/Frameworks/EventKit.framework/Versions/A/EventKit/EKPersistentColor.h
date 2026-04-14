@interface EKPersistentColor : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (id)providerIdentifier;
- (int)entityType;
- (void)setUUID:(id)a0;
- (void)setData:(id)a0;
- (void)setProviderIdentifier:(id)a0;
- (void)setSource:(id)a0;
- (id)source;
- (id)data;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)externalID;
- (id)UUID;
- (void)setExternalID:(id)a0;
- (BOOL)allowsDeletion;

@end
