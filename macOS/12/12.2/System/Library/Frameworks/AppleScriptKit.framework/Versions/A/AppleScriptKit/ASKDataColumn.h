@class ASKDataSource, NSString;

@interface ASKDataColumn : NSObject <NSCopying> {
    ASKDataSource *_dataSource;
    NSString *_name;
    unsigned long long _sortOrder;
    unsigned long long _sortType;
    unsigned long long _sortCaseSensitivity;
}

+ (id)columnForDataSource:(id)a0 withName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)name;
- (void)setName:(id)a0;
- (id)objectSpecifier;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)cells;
- (id)rows;
- (void)setSortType:(unsigned long long)a0;
- (unsigned long long)sortType;
- (unsigned long long)sortOrder;
- (void)setSortOrder:(unsigned long long)a0;
- (unsigned long long)objectIndex_ask;
- (void)removeFromCellsAtIndex:(unsigned long long)a0;
- (void)insertInCells:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFromRowsAtIndex:(unsigned long long)a0;
- (void)insertInRows:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceInCells:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceInRows:(id)a0 atIndex:(unsigned long long)a1;
- (id)initForDataSource:(id)a0 withName:(id)a1;
- (unsigned long long)sortCaseSensitivity;
- (void)setSortCaseSensitivity:(unsigned long long)a0;

@end
