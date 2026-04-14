@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *insertedObjectIDs;
@property (retain, nonatomic) NSMutableSet *deletedObjectIDs;
@property (retain, nonatomic) NSMutableSet *updatedObjectIDs;
@property (readonly, nonatomic) NSString *entityName;

- (id)initWithEntityName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasInserts;
- (void).cxx_destruct;
- (BOOL)hasUpdates;
- (id)description;
- (BOOL)hasChanges;
- (BOOL)hasDeletes;
- (void)combineChanges:(id)a0;
- (void)add:(id)a0 changeType:(int)a1;
- (id)insertedAndUpdatedObjectIDs;

@end
