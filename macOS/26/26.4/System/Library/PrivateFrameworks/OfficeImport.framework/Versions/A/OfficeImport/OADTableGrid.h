@class NSMutableArray;

@interface OADTableGrid : NSObject {
    NSMutableArray *mColumns;
}

- (unsigned long long)columnCount;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)addColumn;
- (id)columnAtIndex:(unsigned long long)a0;
- (void)flipColumnsRTL;

@end
