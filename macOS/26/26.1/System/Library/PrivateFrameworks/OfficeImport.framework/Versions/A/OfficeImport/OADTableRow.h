@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (id)description;
- (void)setHeight:(float)a0;
- (float)height;
- (void).cxx_destruct;
- (id)init;
- (id)cellAtIndex:(unsigned long long)a0;
- (id)addCell;
- (unsigned long long)cellCount;
- (void)flipCellsRTL;

@end
