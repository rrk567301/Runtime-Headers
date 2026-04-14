@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)owner;
- (void)setOwner:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (int)entityType;
- (id)externalRepresentation;
- (void)setExternalID:(id)a0;
- (id)externalModificationTag;
- (id)externalID;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
