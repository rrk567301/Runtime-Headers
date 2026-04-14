@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)fetchRequest;
- (long long)collectionFetchType;
- (unsigned long long)hash;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)fetchedObjectIDs;
- (id)copyWithOptions:(id)a0;
- (id)calculateMediaTypeCounts;
- (BOOL)isFullyBackedByObjectIDs;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)fetchSortDescriptors;
- (id)containerIdentifier;
- (id)description;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (void).cxx_destruct;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)changeHandlingKey;
- (void)updateRegistrationForChangeNotificationDeltas;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)photoLibrary;
- (id)fetchedObjects;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
