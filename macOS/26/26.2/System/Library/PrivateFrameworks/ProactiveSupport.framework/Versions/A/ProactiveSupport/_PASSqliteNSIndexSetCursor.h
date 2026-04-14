@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (BOOL)canOrderByValue:(BOOL)a0;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (id)currentIndexedValue;
- (void)applyValueSort:(BOOL)a0;
- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
