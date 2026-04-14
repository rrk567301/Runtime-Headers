@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (BOOL)hasKey;
+ (const char *)sqliteMethodName;
+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasRowId;
+ (double)baseEstimatedRows;
+ (double)baseEstimatedCost;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)stepIndexedRow;
- (unsigned long long)outputRowId;
- (id)outputKey;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;
- (void)applyRowIdSort:(BOOL)a0;
- (void)applyKeySort:(BOOL)a0;
- (void)finalizeConstraints;

@end
