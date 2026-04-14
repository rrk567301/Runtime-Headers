@class EKPersistentHistoryTransactionChangeSummaryModel, NSDate;

@interface EKPersistentHistoryTransactionChangeSummary : NSObject

@property (readonly, nonatomic) EKPersistentHistoryTransactionChangeSummaryModel *summaryModel;
@property (readonly, nonatomic) NSDate *latestTimestamp;

+ (id)fieldsToIgnore;
+ (id)timeFields;

- (id)init;
- (void).cxx_destruct;
- (id)gatherChangesSinceLastDate:(id)a0 error:(id *)a1;
- (BOOL)calendarsOrAccountsChanged;
- (id)_queryCoreDataForTransactionsSinceLastCheckpoint:(id)a0 error:(id *)a1;
- (void)_updateLatestTimestampWithDate:(id)a0;
- (void)_filterAndPopulateChangesFromTransaction:(id)a0;

@end
