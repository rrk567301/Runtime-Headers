@class NSMutableArray, NSMutableDictionary;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {
    NSMutableArray *_updatedObjectIDs;
    NSMutableDictionary *_failedObjectIDsToError;
    NSMutableDictionary *_recordIDToObjectID;
    NSMutableDictionary *_operationsToExecute;
}

- (void)dealloc;
- (id)description;
- (id)createMirroringResultForRequest:(id)a0 storeIdentifier:(id)a1 success:(char)a2 madeChanges:(char)a3 error:(id)a4;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithOptions:(id)a0 request:(id)a1;

@end
