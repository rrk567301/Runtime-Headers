@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (char)canOrderByValue:(char)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (void)applyValueSort:(char)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedValue;

@end
