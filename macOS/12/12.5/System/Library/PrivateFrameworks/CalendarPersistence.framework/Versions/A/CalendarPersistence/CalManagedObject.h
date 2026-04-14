@class NSDictionary, NSString, NSManagedObjectID;

@interface CalManagedObject : NSManagedObject <EKProtocolObject> {
    long long _willSaveIterations;
}

@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)fetchRequestWithPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (BOOL)hasMatchForPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertNewObjectInContext:(id)a0 obtainPermanentID:(BOOL)a1;

- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;
- (void)didSave;
- (BOOL)isFrozen;
- (BOOL)isNew;
- (BOOL)isPropertyUnavailable:(id)a0;
- (id)additionalFrozenProperties;
- (id)committedValueForKey:(id)a0;
- (id)objectIDAsString;
- (id)fallbackToCommittedValueForKey:(id)a0;
- (id)uniqueKeyForObject;
- (id)enclosingSource;
- (id)keysOnlyRelevantToNetworkDetails;
- (id)contextForValidationError;
- (id)attributesToCompareForMerge;
- (id)attributesToApplyForMerge;
- (void)prefetchRelationshipsForDelete;
- (id)relationshipsToCompareForMerge;
- (BOOL)isValidManagedObject;
- (void)_withZeroStaleness:(id /* block */)a0;
- (id)rebuildValidationError:(id)a0;
- (void)refreshPropertiesWithZeroStaleness:(id)a0;
- (void)refreshRelationshipsWithZeroStaleness:(id)a0;
- (void)applyAttributesFromObject:(id)a0;
- (id)enclosingSources;
- (void)warnIfManagedObjectContextIsNil;
- (void)processForType:(int)a0 inManagedObjectContext:(id)a1;
- (id)_updateParentCR:(id)a0 withDependentCR:(id)a1;

@end
