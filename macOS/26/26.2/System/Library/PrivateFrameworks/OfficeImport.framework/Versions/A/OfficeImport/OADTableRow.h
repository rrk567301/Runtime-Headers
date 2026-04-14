@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (float)height;
- (void)setHeight:(float)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)cellAtIndex:(unsigned long long)a0;
- (id)addCell;
- (unsigned long long)cellCount;
- (void)flipCellsRTL;

@end
