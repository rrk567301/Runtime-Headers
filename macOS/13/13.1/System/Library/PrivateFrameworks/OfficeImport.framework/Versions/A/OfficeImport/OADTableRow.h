@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setHeight:(float)a0;
- (float)height;
- (id)cellAtIndex:(unsigned long long)a0;
- (unsigned long long)cellCount;
- (void)flipCellsRTL;
- (id)addCell;

@end
