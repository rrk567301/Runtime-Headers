@interface IMLogDump : NSObject

@property (readonly, nonatomic) BOOL shouldCollectPowerWifiStats;

+ (id)sharedInstance;

- (id)init;
- (void)_calculateConnectedMinutesForDateKey:(id)a0 durationKey:(id)a1 daysDictionary:(id)a2 totalDurationDictionary:(id)a3 totalDurationKey:(id)a4;
- (double)_calculateMinutesSyncingWithDurationKey:(id)a0 attemptDateKey:(id)a1;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)a0;
- (id)_dictionaryForDayKey:(id)a0;
- (void)_incrementSyncAttemptsWithKey:(id)a0 syncDateKey:(id)a1;
- (BOOL)_isOnPower;
- (BOOL)_isWifiUsable;
- (id)_lastHoursToAppend:(int)a0;
- (void)_noteSyncEndedForDurationKey:(id)a0 dateKey:(id)a1;
- (id)_predicateToAppend:(id)a0;
- (void)clearSyncStats;
- (void)dumpMOCLoggingMetaData;
- (void)incrementCoreDuetSyncAttempts;
- (void)noteCoreDuetSyncEnded;
- (void)printPowerAndWifiStats;
- (void)printSyncDurationStats;

@end
