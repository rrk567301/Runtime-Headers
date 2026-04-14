@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (BOOL)hasKey;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (BOOL)hasRowId;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (id)init;
- (void).cxx_destruct;
- (void)applyRowIdSort:(BOOL)a0;
- (BOOL)currentIndexEof;
- (void)applyValueSort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyKeySort:(BOOL)a0;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (id)outputKey;
- (unsigned long long)outputRowId;
- (void)stepIndexedRow;

@end
