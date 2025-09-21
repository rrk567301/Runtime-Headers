@class PXSectionedSelectionManager, PXSelectionSnapshot;

@interface PXAssetActionPerformer : PXActionPerformer

@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;

- (void).cxx_destruct;
- (char)shouldExitSelectModeForState:(unsigned long long)a0;

@end
