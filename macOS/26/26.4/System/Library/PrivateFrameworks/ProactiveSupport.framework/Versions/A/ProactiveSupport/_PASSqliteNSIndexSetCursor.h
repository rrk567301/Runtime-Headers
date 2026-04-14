@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedRows;
+ (double)baseEstimatedCost;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;
- (id)currentIndexedValue;

@end
