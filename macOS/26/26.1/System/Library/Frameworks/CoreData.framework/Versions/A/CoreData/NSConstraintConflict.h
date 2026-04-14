@class NSArray, NSDictionary, NSManagedObject;

@interface NSConstraintConflict : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *constraint;
@property (readonly, copy) NSDictionary *constraintValues;
@property (readonly, retain) NSManagedObject *databaseObject;
@property (readonly, retain) NSDictionary *databaseSnapshot;
@property (readonly, copy) NSArray *conflictingObjects;
@property (readonly, copy) NSArray *conflictingSnapshots;

- (id)initWithConstraint:(id)a0 databaseObject:(id)a1 databaseSnapshot:(id)a2 conflictingObjects:(id)a3 conflictingSnapshots:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_doCleanupForXPCStore:(id)a0 context:(id)a1;
- (BOOL)_isDBConflict;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
