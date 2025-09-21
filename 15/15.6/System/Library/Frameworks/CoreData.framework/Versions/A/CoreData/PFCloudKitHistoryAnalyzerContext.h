@class NSSet, NSMutableDictionary, NSMutableSet, NSSQLCore, NSManagedObjectContext;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
    NSManagedObjectContext *_managedObjectContext;
    NSSet *_configuredEntityNames;
    NSMutableSet *_resetChangedObjectIDs;
    NSMutableDictionary *_entityIDToChangedPrimaryKeySet;
    NSSQLCore *_store;
}

- (void)dealloc;
- (char)reset:(id *)a0;
- (id)fetchSortedStates:(id *)a0;
- (char)finishProcessing:(id *)a0;
- (id)initWithOptions:(id)a0 managedObjectContext:(id)a1 store:(id)a2;
- (id)newAnalyzerStateForChange:(id)a0 error:(id *)a1;
- (char)processChange:(id)a0 error:(id *)a1;
- (char)resetStateForObjectID:(id)a0 error:(id *)a1;

@end
