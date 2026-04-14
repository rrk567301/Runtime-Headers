@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (unsigned long long)filterCount;
- (id)init;
- (id)filterAtIndex:(unsigned long long)a0;
- (id)description;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)setColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnIndex;
- (int)filtersRelation;
- (void)setFiltersRelation:(int)a0;

@end
