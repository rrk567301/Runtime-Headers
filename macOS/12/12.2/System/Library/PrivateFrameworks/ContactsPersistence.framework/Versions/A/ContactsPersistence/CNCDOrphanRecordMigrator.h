@class CNCDContainer;

@interface CNCDOrphanRecordMigrator : CNCDMigrator

@property (readonly) CNCDContainer *container;

+ (id)os_log;

- (void).cxx_destruct;
- (void)migrate;
- (void)saveContext;
- (void)fetchOrCreateDefaultContainer;
- (void)adoptUncontainedObjects;
- (id)fetchExistingContainer;
- (id)makeNewDefaultContainer;
- (id)fetchExistingContainers:(id *)a0;
- (void)adoptAdoptUncontainedObjectsWithEntityName:(id)a0 containerRelationshipName:(id)a1;
- (id)fetchUncontainedObjectsWithEntityName:(id)a0 containerRelationshipName:(id)a1;

@end
