@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (id)planningInfoForKeyConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (BOOL)hasKey;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)applyValueSort:(BOOL)a0;
- (unsigned long long)outputRowId;
- (id)outputKey;
- (void)applyKeySort:(BOOL)a0;
- (void).cxx_destruct;
- (void)applyRowIdSort:(BOOL)a0;
- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (id)init;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
