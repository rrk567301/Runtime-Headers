@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {
    unsigned long long _currentIndex;
    NSIndexSet *_indexSet;
    NSMutableIndexSet *_mutableIndexSet;
    char _isDescending;
}

@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;

+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (char)canOrderByRowId:(char)a0;
+ (double)costFactorForRandomAccess;

- (id)init;
- (void).cxx_destruct;
- (void)setIndexSet:(id)a0;
- (void)applyRowIdSort:(char)a0;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (unsigned long long)currentIndexedRowId;
- (void)finalizeConstraints;
- (void)matchNoRows;
- (void)matchOneRow:(unsigned long long)a0;
- (void)stepIndexedRow;

@end
