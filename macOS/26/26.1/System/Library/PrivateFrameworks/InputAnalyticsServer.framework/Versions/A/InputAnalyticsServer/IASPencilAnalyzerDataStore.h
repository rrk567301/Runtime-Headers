@class IASDataStoreDailyTable;

@interface IASPencilAnalyzerDataStore : IASDataStore

@property (retain, nonatomic) IASDataStoreDailyTable *usageTable;
@property (retain, nonatomic) IASDataStoreDailyTable *errorTable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allErrorTableData;
- (id)allUsageTableData;
- (BOOL)cleanupWithCutoff:(id)a0;
- (id)combineCurrentErrorCodes:(id)a0 withNewErrorCodes:(id)a1;
- (long long)lastActivityTimestampForPencilVersion:(unsigned long long)a0 forUsageType:(unsigned long long)a1 forAppInfo:(id)a2 forDate:(id)a3;
- (BOOL)logAnalyzerError:(id)a0 forDate:(id)a1;
- (BOOL)updateValuesForPencilVersion:(unsigned long long)a0 forUsageType:(unsigned long long)a1 forAppInfo:(id)a2 forDate:(id)a3 withMinutesIncrement:(long long)a4 withSecondsIncrement:(long long)a5 withLastActivityTimestamp:(id)a6;

@end
