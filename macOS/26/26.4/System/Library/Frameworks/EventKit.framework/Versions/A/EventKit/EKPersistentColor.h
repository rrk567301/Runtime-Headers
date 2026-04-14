@interface EKPersistentColor : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)providerIdentifier;
- (void)setExternalID:(id)a0;
- (id)externalID;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setData:(id)a0;
- (void)setProviderIdentifier:(id)a0;
- (id)source;
- (void)setUUID:(id)a0;
- (id)data;
- (void)setSource:(id)a0;
- (id)UUID;
- (BOOL)allowsDeletion;

@end
