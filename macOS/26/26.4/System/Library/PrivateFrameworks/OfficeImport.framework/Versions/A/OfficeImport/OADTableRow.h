@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (void).cxx_destruct;
- (float)height;
- (void)setHeight:(float)a0;
- (id)init;
- (id)description;
- (id)cellAtIndex:(unsigned long long)a0;
- (id)addCell;
- (unsigned long long)cellCount;
- (void)flipCellsRTL;

@end
