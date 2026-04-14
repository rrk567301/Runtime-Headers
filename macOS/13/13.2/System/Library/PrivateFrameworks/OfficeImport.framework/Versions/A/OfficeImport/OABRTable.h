@class OABTableSortedIntArray, ESDContainer, OABReaderState, OADTable;

@interface OABRTable : NSObject {
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    struct CGPoint { double x; double y; } mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    void *mHorzLines;
    void *mVertLines;
    void *mCells;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)map;
- (id)initWithSourceTable:(id)a0 targetTable:(id)a1 state:(id)a2;
- (void)readAnchor;
- (void)mapScale;
- (void)readCoordinates;
- (void)readCellsAndLines;
- (void)validateTable;
- (id)readStrokeFromShape:(void *)a0;
- (void)createTargetTableContents;

@end
