@class NSTableRowHeightData, NSMutableIndexSet, NSTableBannerRowData, NSArray, NSMutableArray;

@interface NSTableUpdateData : NSObject {
    NSMutableIndexSet *_rowViewsIndexes;
    NSMutableArray *_rowViews;
    NSMutableArray *_insertionItems;
    char _selectionChanged;
    NSMutableArray *_deletionItems;
    char _containsSlideDeletes;
    NSMutableIndexSet *_deletionRowIndexes;
    NSMutableIndexSet *_insertionRowIndexes;
    char _containsDeletes;
    char _containsInserts;
    char _containsMoves;
    char _rowHeightsChanged;
    char _containsSwipe;
    long long _updateCount;
    NSTableRowHeightData *_priorRowHeightData;
    NSTableBannerRowData *_priorGroupRowData;
    NSArray *_priorColumnWidths;
    char _needsFrameUpdate;
    char _containsAnimations;
    NSTableBannerRowData *_priorFooterRowData;
}

- (void)dealloc;

@end
