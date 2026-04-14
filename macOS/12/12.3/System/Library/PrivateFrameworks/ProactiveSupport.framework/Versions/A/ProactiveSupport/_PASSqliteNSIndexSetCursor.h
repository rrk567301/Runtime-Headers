@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (const char *)sqliteMethodName;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (double)baseEstimatedCost;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;

- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;

@end
