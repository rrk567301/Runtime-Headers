@class WDTable, NSMutableArray, WDTableRowProperties;

@interface WDTableRow : NSObject {
    unsigned long long mIndex;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}

@property (readonly, weak) WDTable *table;

- (id)properties;
- (void)setIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)index;
- (void).cxx_destruct;
- (id)addCell;
- (id)cellAt:(unsigned long long)a0;
- (id)newCellIterator;
- (id)addCellWithIndex:(unsigned long long)a0;
- (unsigned long long)cellCount;
- (id)cellIterator;
- (id)initWithTable:(id)a0 at:(unsigned long long)a1;

@end
