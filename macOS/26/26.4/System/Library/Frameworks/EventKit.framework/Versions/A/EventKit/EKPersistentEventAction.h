@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (id)externalID;
- (int)entityType;
- (void)setExternalModificationTag:(id)a0;
- (id)owner;
- (id)externalRepresentation;
- (void)setOwner:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
