@class WDTable, NSMutableArray, WDTableRowProperties;

@interface WDTableRow : NSObject {
    unsigned long long mIndex;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}

@property (readonly, weak) WDTable *table;

- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (id)properties;
- (id)description;
- (void).cxx_destruct;
- (id)addCell;
- (id)cellAt:(unsigned long long)a0;
- (id)newCellIterator;
- (id)addCellWithIndex:(unsigned long long)a0;
- (unsigned long long)cellCount;
- (id)cellIterator;
- (id)initWithTable:(id)a0 at:(unsigned long long)a1;

@end
