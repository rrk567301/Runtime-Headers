@class NSObject;
@protocol OS_dispatch_source;

@interface DDAbstractDatabaseLogger : DDAbstractLogger {
    unsigned long long saveThreshold;
    double saveInterval;
    double maxAge;
    double deleteInterval;
    BOOL deleteOnEverySave;
    BOOL saveTimerSuspended;
    unsigned long long unsavedCount;
    unsigned long long unsavedTime;
    NSObject<OS_dispatch_source> *saveTimer;
    unsigned long long lastDeleteTime;
    NSObject<OS_dispatch_source> *deleteTimer;
}

@property unsigned long long saveThreshold;
@property double saveInterval;
@property double maxAge;
@property double deleteInterval;
@property BOOL deleteOnEverySave;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (void)logMessage:(id)a0;
- (void)performDelete;
- (void)didAddLogger;
- (void)willRemoveLogger;
- (void)destroySaveTimer;
- (void)destroyDeleteTimer;
- (void)db_saveAndDelete;
- (void)db_save;
- (void)db_delete;
- (void)performSaveAndSuspendSaveTimer;
- (void)updateDeleteTimer;
- (void)createSuspendedSaveTimer;
- (void)updateAndResumeSaveTimer;
- (void)createAndStartDeleteTimer;
- (BOOL)db_log:(id)a0;
- (void)savePendingLogEntries;
- (void)deleteOldLogEntries;

@end
