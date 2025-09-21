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

- (void)applyRowIdSort:(BOOL)a0;
- (void)matchNoRows;
- (void)setIndexSet:(id)a0;
- (void)finalizeConstraints;
- (id)init;
- (void)stepIndexedRow;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (unsigned long long)currentIndexedRowId;
- (void)matchOneRow:(unsigned long long)a0;
- (void).cxx_destruct;

@end
