@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setOwner:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (void)setExternalID:(id)a0;
- (id)externalID;
- (id)owner;
- (id)externalModificationTag;
- (void)setExternalRepresentation:(id)a0;
- (int)entityType;
- (id)externalRepresentation;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
