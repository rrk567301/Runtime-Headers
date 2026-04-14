@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)fetchRequest;
- (id)fetchedObjects;
- (id)photoLibrary;
- (id)fetchedObjectIDs;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;
- (id)calculateMediaTypeCounts;
- (id)copyWithOptions:(id)a0;
- (BOOL)isFullyBackedByObjectIDs;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)fetchSortDescriptors;
- (long long)collectionFetchType;
- (void)updateRegistrationForChangeNotificationDeltas;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (id)fetchResultWithChangeHandlingValue:(id)a0;

@end
