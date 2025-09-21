@class NSProgress, NSString;

@interface PLModelMigrationAction_RemoveExcessSocialGroupKeyAssetEdges : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_recordUserPickedKeyAssetEdge:(id)a0 inExistingKeyAssetEdgeByNodeIDDictionary:(id)a1;
- (void)_removeKeyAssetLabelsIfNecessaryForEdge:(id)a0 existingKeyAssetEdgeByNodeID:(id)a1 keyAssetLabel:(id)a2 userPickedKeyAssetLabel:(id)a3;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
