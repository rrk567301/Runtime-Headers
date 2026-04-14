@class NSMutableSet;

@interface EKObjectPersistentChangesModel : NSObject

@property (readonly, nonatomic) NSMutableSet *nonTimeUpdatedIDs;
@property (readonly, nonatomic) NSMutableSet *timeUpdatedIDs;
@property (readonly, nonatomic) NSMutableSet *insertedIDs;
@property (readonly, nonatomic) NSMutableSet *deletedIDs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasAnyChanges;
- (id)immutableInsertedAndUpdatedObjectIDs;
- (id)immutableDeletedObjectIDs;
- (id)immutableAllModifiedObjectIDs;
- (id)immutableNonTimeUpdatedObjectIDs;
- (id)immutableTimeUpdatedObjectIDs;
- (id)immutableInsertedObjectIDs;
- (id)immutableAllUpdatedObjectIDs;

@end
