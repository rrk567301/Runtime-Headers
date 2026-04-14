@class NSProgress, NSString, NSDictionary;

@interface PLModelMigrationAction_RelocateEdgesAndNormalizeNodeValues : PLModelMigrationAction <PLModelMigrationAction> {
    NSDictionary *_nameCodesByStringName;
}

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_encloseActor:(id)a0 fromEdge:(id)a1 isSource:(BOOL)a2 actorLabel:(id)a3 cache:(id)a4;
+ (long long)actionProgressWeight;

- (void)setup;
- (void).cxx_destruct;
- (BOOL)_migrateEdgesToNativelyModeledObjectsWithError:(id *)a0 context:(id)a1;
- (BOOL)_migrateGraphEdgeValuesWithError:(id *)a0 context:(id)a1;
- (BOOL)_migrateGraphNodeValuesWithError:(id *)a0 context:(id)a1;
- (BOOL)_migrateNodePropertiesWithError:(id *)a0 context:(id)a1;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
