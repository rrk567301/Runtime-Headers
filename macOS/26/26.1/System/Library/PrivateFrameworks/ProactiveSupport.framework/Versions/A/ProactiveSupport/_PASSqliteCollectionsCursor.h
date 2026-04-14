@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasKey;
+ (double)baseEstimatedRows;
+ (const char *)sqliteMethodName;
+ (double)baseEstimatedCost;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (id)outputKey;
- (void)applyValueSort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)finalizeConstraints;
- (unsigned long long)outputRowId;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedValue;
- (void).cxx_destruct;
- (void)stepIndexedRow;
- (void)applyKeySort:(BOOL)a0;
- (BOOL)currentIndexEof;
- (void)applyRowIdSort:(BOOL)a0;
- (id)init;

@end
