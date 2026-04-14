@interface EKPersistentColor : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)providerIdentifier;
- (void)setProviderIdentifier:(id)a0;
- (void)setExternalID:(id)a0;
- (id)UUID;
- (id)source;
- (void)setUUID:(id)a0;
- (void)setData:(id)a0;
- (id)externalID;
- (id)data;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)entityType;
- (void)setSource:(id)a0;
- (BOOL)allowsDeletion;

@end
