@class WDTable, NSMutableArray, WDTableRowProperties;

@interface WDTableRow : NSObject {
    unsigned long long mIndex;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}

@property (readonly, weak) WDTable *table;

- (id)description;
- (void).cxx_destruct;
- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (id)properties;
- (unsigned long long)cellCount;
- (id)addCell;
- (id)cellIterator;
- (id)newCellIterator;
- (id)initWithTable:(id)a0 at:(unsigned long long)a1;
- (id)cellAt:(unsigned long long)a0;
- (id)addCellWithIndex:(unsigned long long)a0;

@end
