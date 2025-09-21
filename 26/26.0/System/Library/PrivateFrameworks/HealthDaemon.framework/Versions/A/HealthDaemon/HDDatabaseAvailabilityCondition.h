@class OS_os_log, NSDate;

@interface HDDatabaseAvailabilityCondition : NSObject <HDDatabaseProtectedDataObserver, HDBackgroundTaskCondition> {
    void /* function */ callback;
}

@property (nonatomic, weak) void /* function */ db;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSDate *waitingStartTime;
@property (nonatomic, retain) OS_os_log *loggingCategory;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 loggingCategory:(id)a1;
- (BOOL)isConditionMet;
- (void)setReadyCallback:(id /* block */)a0;

@end
