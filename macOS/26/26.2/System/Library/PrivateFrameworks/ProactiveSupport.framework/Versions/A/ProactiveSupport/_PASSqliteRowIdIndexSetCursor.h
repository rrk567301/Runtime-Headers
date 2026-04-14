@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {
    unsigned long long _currentIndex;
    NSIndexSet *_indexSet;
    NSMutableIndexSet *_mutableIndexSet;
    BOOL _isDescending;
}

@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;

+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (double)costFactorForRandomAccess;

- (void)matchOneRow:(unsigned long long)a0;
- (void)setIndexSet:(id)a0;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)finalizeConstraints;
- (unsigned long long)currentIndexedRowId;
- (void).cxx_destruct;
- (void)applyRowIdSort:(BOOL)a0;
- (void)stepIndexedRow;
- (void)matchNoRows;
- (id)init;

@end
