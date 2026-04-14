@class NSArray, NSFetchedResultsController, NSObject;
@protocol OS_dispatch_queue, ICRDSectionIdentifier, NSCopying;

@interface ICTagCoreDataIndexer : ICRDCoreDataIndexer

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSArray *hashtags;
@property (retain, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) id<ICRDSectionIdentifier, NSCopying> sectionIdentifier;
@property (nonatomic) BOOL includesAllTagsItem;
@property (readonly, nonatomic) unsigned long long sectionIdentifierType;

+ (BOOL)isTagItemIdentifier:(id)a0;

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
