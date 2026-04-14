@class NSDate;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;

@end
