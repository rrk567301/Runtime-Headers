@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)description;
- (void).cxx_destruct;
- (int)nestingLevel;
- (void)clearProperties;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (id)addRow;
- (id)properties;
- (unsigned long long)rowCount;
- (id)initWithText:(id)a0;
- (id)rowAt:(unsigned long long)a0;
- (int)blockType;
- (id)runIterator;
- (id)newRunIterator;
- (void)clearRows;
- (id)rowIterator;
- (id)newRowIterator;
- (id)cellIterator;
- (id)newCellIterator;

@end
