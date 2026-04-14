@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (double)baseEstimatedCost;
+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (unsigned long long)outputRowId;
- (id)outputKey;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeySort:(BOOL)a0;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (id)init;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedValue;
- (BOOL)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void).cxx_destruct;
- (void)applyRowIdSort:(BOOL)a0;
- (void)stepIndexedRow;
- (void)applyValueSort:(BOOL)a0;
- (void)finalizeConstraints;

@end
