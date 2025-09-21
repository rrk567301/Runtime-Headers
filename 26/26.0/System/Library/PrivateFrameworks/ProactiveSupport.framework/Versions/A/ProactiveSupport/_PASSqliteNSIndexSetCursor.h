@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (const char *)sqliteMethodName;
+ (double)baseEstimatedCost;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedRows;
+ (const char *)sqliteCreateTableStatement;

- (id)currentIndexedValue;
- (void)setCollection:(id)a0;
- (void)applyValueSort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
