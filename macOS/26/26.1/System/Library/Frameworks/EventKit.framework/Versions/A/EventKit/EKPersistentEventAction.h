@interface EKPersistentEventAction : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (id)externalModificationTag;
- (void)setOwner:(id)a0;
- (id)owner;
- (id)externalRepresentation;
- (void)setExternalModificationTag:(id)a0;
- (id)externalID;
- (void)setExternalRepresentation:(id)a0;
- (void)setExternalID:(id)a0;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
