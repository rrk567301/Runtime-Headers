@class NSFetchedResultsController, NSArray, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue, ICRDSectionIdentifier, NSCopying;

@interface ICSystemPaperCoreDataIndexer : ICRDCoreDataIndexer

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSMutableOrderedSet *mutableObjectIDs;
@property (retain, nonatomic) id<ICRDSectionIdentifier, NSCopying> sectionIdentifier;
@property (readonly, nonatomic) NSArray *objectIDs;
@property (readonly, nonatomic) unsigned long long sectionIdentifierType;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (void)clearIndex;
- (void)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (id)newSnapshotFromIndex;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)initWithModernManagedObjectContext:(id)a0 sectionIdentifierType:(unsigned long long)a1;

@end
