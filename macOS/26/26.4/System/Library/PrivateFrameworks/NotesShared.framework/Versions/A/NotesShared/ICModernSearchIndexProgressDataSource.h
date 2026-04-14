@class NSManagedObjectContext, NSURL;

@interface ICModernSearchIndexProgressDataSource : NSObject <ICSearchIndexProgressCoordinatorDataSource>

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSURL *persistenceURL;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (id)indexStateCreateIfNecessaryFor:(id)a0;
- (void)adoptIndexState:(unsigned long long)a0 forItemWithIdentifier:(id)a1 updatingProgress:(id)a2;
- (id)allItemIdentifiersForState:(unsigned long long)a0;
- (id)existingIndexStateFor:(id)a0;
- (void)fullProgressUpdateWithCompletionHandler:(id /* block */)a0;
- (id)newIndexStateFor:(id)a0;
- (void)revertStagingWithItemIdentifier:(id)a0;
- (void)stageForProcessingWithItemIdentifier:(id)a0 updatingProgress:(id)a1;
- (unsigned long long)stateOfItemWithIdentifier:(id)a0;

@end
