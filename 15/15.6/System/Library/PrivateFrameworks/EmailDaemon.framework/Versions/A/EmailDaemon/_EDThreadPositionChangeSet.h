@class NSMutableDictionary, NSMutableSet;

@interface _EDThreadPositionChangeSet : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *objectIDsToAddByBeforeObjectID;
@property (retain, nonatomic) NSMutableDictionary *objectIDsToMoveByBeforeObjectID;
@property (retain, nonatomic) NSMutableSet *objectIDsToDelete;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)_isMovingObjectID:(id)a0;
- (char)addObjectIDToAdd:(id)a0 before:(id)a1;
- (void)addObjectIDToDelete:(id)a0;
- (char)addObjectIDToMove:(id)a0 before:(id)a1;
- (char)isAddingObjectID:(id)a0;
- (char)isDeletingObjectID:(id)a0;

@end
