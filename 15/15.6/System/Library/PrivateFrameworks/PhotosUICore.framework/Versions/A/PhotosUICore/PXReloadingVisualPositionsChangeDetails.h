@interface PXReloadingVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {
    char _reloadAnchor;
}

- (struct { long long x0; long long x1; char x2; })bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)a0;
- (struct { long long x0; long long x1; char x2; })bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)a0;
- (id)initWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5;
- (id)initWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5 reloadAllIncludingAnchor:(char)a6;

@end
