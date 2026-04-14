@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (BOOL)hasKey;
+ (double)baseEstimatedRows;
+ (double)baseEstimatedCost;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (void)applyRowIdSort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;
- (id)outputKey;
- (void)applyKeySort:(BOOL)a0;
- (unsigned long long)outputRowId;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void).cxx_destruct;
- (id)currentIndexedValue;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (id)init;
- (void)finalizeConstraints;
- (void)stepIndexedRow;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (BOOL)currentIndexEof;

@end
