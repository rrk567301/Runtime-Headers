@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *insertedObjectIDs;
@property (retain, nonatomic) NSMutableSet *deletedObjectIDs;
@property (retain, nonatomic) NSMutableSet *updatedObjectIDs;
@property (readonly, nonatomic) NSString *entityName;

- (BOOL)hasChanges;
- (BOOL)hasUpdates;
- (BOOL)hasInserts;
- (id)description;
- (id)initWithEntityName:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasDeletes;
- (void)add:(id)a0 changeType:(int)a1;
- (void)combineChanges:(id)a0;
- (id)insertedAndUpdatedObjectIDs;

@end
