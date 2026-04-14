@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator

+ (void)buildSchemaIfNeeded;

- (id)objectForPropertySet:(id)a0 contentItem:(id)a1 context:(id)a2;
- (id)identifiersForContentItem:(id)a0;
- (id)sectionObjectForPropertySet:(id)a0 contentItem:(id)a1 context:(id)a2;
- (void)mapIdentifierCreationBlock:(id /* block */)a0;
- (void)mapPropertyKey:(id)a0 toMPContentItemSelector:(SEL)a1;
- (void)mapArtworkPropertyKey:(id)a0;
- (void)mapPropertyKey:(id)a0 toUserInfoKey:(id)a1;
- (void)mapPropertyKey:(id)a0 toDeviceSpecificUserInfoKey:(id)a1;
- (void)mapPropertyKey:(id)a0 toValueTransformer:(id /* block */)a1;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1;

@end
