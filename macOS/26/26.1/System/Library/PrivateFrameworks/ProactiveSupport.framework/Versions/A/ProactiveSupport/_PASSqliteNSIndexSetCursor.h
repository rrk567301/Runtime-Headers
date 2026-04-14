@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (const char *)sqliteMethodName;
+ (double)baseEstimatedCost;

- (void)applyValueSort:(BOOL)a0;
- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedValue;

@end
