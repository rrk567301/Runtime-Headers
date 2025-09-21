@class NSProgress, NSString, NSSet;

@interface PLModelMigrationAction_AddDuplicateBackgroundJobItems : PLModelMigrationActionBackground <PLModelMigrationAction> {
    NSSet *_additionalAttributesPropertiesToInclude;
    NSSet *_managedAssetPropertiesToInclude;
    NSSet *_duplicateAlbumPropertiesToInclude;
}

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (void).cxx_destruct;
- (void)_cleanupLegacyProcessingTokensWithManagedObjectContext:(id)a0;
- (id)_convertToPLManagedAssetOIDsFromSelectionOIDs:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (char)_currentDuplicateProcessingStatusWithManagedObjectContext:(id)a0;
- (id)_managedAssetOIDsFromAdditionalAssetAttributesOIDs:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (id)_managedAssetOIDsFromDuplicateAlbumOIDs:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (long long)_processTransactionIterator:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (long long)_processWithLimitedSelection:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (void)_setupPropertiesWithManagedObjectContext:(id)a0;
- (void)_updateDuplicateProcessingStatusIfNeededWithStatus:(char)a0 shouldSave:(BOOL)a1 managedObjectContext:(id)a2;
- (id)_validObjectIDFromChange:(id)a0 entityDescriptionMap:(id)a1;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
