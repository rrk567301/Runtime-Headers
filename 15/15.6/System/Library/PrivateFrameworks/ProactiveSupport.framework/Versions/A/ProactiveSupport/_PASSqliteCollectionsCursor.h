@interface _PASSqliteCollectionsCursor : NSObject {
    char _foundOutputRow;
    char _eof;
}

@property (retain, nonatomic) id collection;

+ (char)hasKey;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (char)canOrderByKey:(char)a0;
+ (char)canOrderByRowId:(char)a0;
+ (char)canOrderByValue:(char)a0;
+ (char)hasRowId;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (id)init;
- (void).cxx_destruct;
- (void)applyValueSort:(char)a0;
- (void)applyRowIdSort:(char)a0;
- (char)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyKeySort:(char)a0;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (char)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (id)outputKey;
- (unsigned long long)outputRowId;
- (void)stepIndexedRow;

@end
