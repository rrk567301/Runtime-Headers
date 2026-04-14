@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (unsigned long long)filterCount;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)filterAtIndex:(unsigned long long)a0;
- (void)addFilter:(id)a0;
- (void)setColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnIndex;
- (int)filtersRelation;
- (void)setFiltersRelation:(int)a0;

@end
