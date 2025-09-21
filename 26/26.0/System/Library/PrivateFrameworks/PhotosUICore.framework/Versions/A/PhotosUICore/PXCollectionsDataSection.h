@interface PXCollectionsDataSection : PXDataSection

- (id)init;
- (id)accessoryTitleForCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0 lockStatePerCollection:(id)a1 outlineObject:(id)a2;
- (id)initWithCollectionsDataSource:(id)a0 outlineObject:(id)a1;
- (id)initWithDisplayCollection:(id)a0 accessoryTitle:(id)a1 lockState:(unsigned long long)a2 outlineObject:(id)a3;
- (id)initWithDisplayCollection:(id)a0 outlineObject:(id)a1;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
