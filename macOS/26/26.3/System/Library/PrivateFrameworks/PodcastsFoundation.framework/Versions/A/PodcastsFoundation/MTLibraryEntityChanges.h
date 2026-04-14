@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *insertedObjectIDs;
@property (retain, nonatomic) NSMutableSet *deletedObjectIDs;
@property (retain, nonatomic) NSMutableSet *updatedObjectIDs;
@property (readonly, nonatomic) NSString *entityName;

- (BOOL)hasChanges;
- (id)initWithEntityName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasInserts;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasUpdates;
- (BOOL)hasDeletes;
- (void)add:(id)a0 changeType:(int)a1;
- (void)combineChanges:(id)a0;
- (id)insertedAndUpdatedObjectIDs;

@end
