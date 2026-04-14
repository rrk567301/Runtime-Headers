@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)containerIdentifier;
- (id)calculateMediaTypeCounts;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)changeHandlingKey;
- (id)photoLibrary;
- (id)fetchSortDescriptors;
- (id)fetchedObjects;
- (id)fetchRequest;
- (BOOL)isFullyBackedByObjectIDs;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)copyWithOptions:(id)a0;
- (id)description;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)fetchedObjectIDs;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)hash;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (long long)collectionFetchType;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
