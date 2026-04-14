@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)photoLibrary;
- (id)fetchSortDescriptors;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)containerIdentifier;
- (id)fetchRequest;
- (id)changeHandlingKey;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)description;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)copyWithOptions:(id)a0;
- (id)fetchedObjectIDs;
- (long long)collectionFetchType;
- (void).cxx_destruct;
- (id)fetchedObjects;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)calculateMediaTypeCounts;
- (BOOL)isEqual:(id)a0;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (BOOL)isFullyBackedByObjectIDs;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
