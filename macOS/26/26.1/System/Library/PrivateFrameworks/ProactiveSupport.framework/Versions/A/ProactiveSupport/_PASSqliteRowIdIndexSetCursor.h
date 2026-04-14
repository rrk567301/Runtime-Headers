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

- (void)setIndexSet:(id)a0;
- (void)finalizeConstraints;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (unsigned long long)currentIndexedRowId;
- (void).cxx_destruct;
- (void)matchOneRow:(unsigned long long)a0;
- (void)stepIndexedRow;
- (void)matchNoRows;
- (void)applyRowIdSort:(BOOL)a0;
- (id)init;

@end
