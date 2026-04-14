@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (const char *)sqliteMethodName;
+ (double)baseEstimatedCost;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedRows;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (void)applyRowIdSort:(BOOL)a0;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (unsigned long long)outputRowId;
- (BOOL)currentIndexEof;
- (void)applyKeySort:(BOOL)a0;
- (id)init;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;
- (void)stepIndexedRow;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (id)outputKey;
- (void).cxx_destruct;
- (BOOL)currentIndexedRowSatisfiesConstraints;

@end
