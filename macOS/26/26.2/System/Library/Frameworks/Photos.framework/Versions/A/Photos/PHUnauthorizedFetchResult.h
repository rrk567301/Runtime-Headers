@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)photoLibrary;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)fetchRequest;
- (long long)collectionFetchType;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)containerIdentifier;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (void).cxx_destruct;
- (id)fetchSortDescriptors;
- (id)changeHandlingKey;
- (id)description;
- (id)fetchedObjectIDs;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)fetchedObjects;
- (id)copyWithOptions:(id)a0;
- (id)calculateMediaTypeCounts;
- (BOOL)isFullyBackedByObjectIDs;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
