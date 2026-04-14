@class NSCalendar, NSDate;
@protocol DNDSScheduleLifetimeMonitorDataSource;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}

@property (retain, nonatomic) NSCalendar *calendar;
@property (weak, nonatomic) id<DNDSScheduleLifetimeMonitorDataSource> dataSource;

+ (Class)lifetimeClass;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (id)activeDateIntervalForScheduleLifetime:(id)a0 assertion:(id)a1 date:(id)a2;
- (id)nextActiveDateIntervalForScheduleLifetime:(id)a0 assertion:(id)a1 date:(id)a2;
- (id)_activeDateIntervalForScheduleLifetime:(id)a0 assertion:(id)a1 date:(id)a2 ignoreMatchScheduleStartDate:(BOOL)a3;
- (id)_activeDateIntervalForScheduleLifetime:(id)a0 assertionStartDate:(id)a1 date:(id)a2 scheduleSettings:(id)a3 calendar:(id)a4 ignoreMatchScheduleStartDate:(BOOL)a5;

@end
