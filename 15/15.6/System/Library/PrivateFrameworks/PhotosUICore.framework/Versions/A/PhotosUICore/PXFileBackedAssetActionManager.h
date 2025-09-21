@class NSMutableDictionary;

@interface PXFileBackedAssetActionManager : PXAssetActionManager

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;

- (void).cxx_destruct;
- (char)canPerformActionType:(id)a0;
- (id)_selectionSnapshotForPerformerClass:(Class)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)initWithSelectionManager:(id)a0;
- (char)supportsActionType:(id)a0;

@end
