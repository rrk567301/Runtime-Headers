@interface PLModelMigrationActionUtility : NSObject

+ (id)getHistoryTokenWithAction:(id)a0 key:(id)a1 managedObjectContext:(id)a2;
+ (BOOL)processExtendedAttributesWithAction:(id)a0 asset:(id)a1 metadata:(id)a2 error:(id *)a3;
+ (long long)processManagedObjectBatchesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 pendingParentUnitCount:(long long)a3 useObjectIDResumeMarker:(BOOL)a4 error:(id *)a5 processingBlock:(id /* block */)a6;
+ (long long)processManagedObjectWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 useObjectIDResumeMarker:(BOOL)a3 error:(id *)a4 processingBlock:(id /* block */)a5;
+ (long long)processManagedObjectsWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 pendingParentUnitCount:(long long)a3 error:(id *)a4 processingBlock:(id /* block */)a5;
+ (long long)removeFromDuplicatesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 requiresLibraryReprocessing:(BOOL)a3 error:(id *)a4;
+ (long long)removeOrphanedObjectsWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 error:(id *)a3;
+ (long long)resetDuplicateProcessingWithAction:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (void)setHistoryTokenWithAction:(id)a0 key:(id)a1 value:(id)a2 managedObjectContext:(id)a3;
+ (BOOL)shouldProcessHistoryTokenWithAction:(id)a0 token:(id)a1 cutoffPercent:(double)a2 managedObjectContext:(id)a3;
+ (long long)updateExtendedAttributesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 useObjectIDResumeMarker:(BOOL)a3 error:(id *)a4;

@end
