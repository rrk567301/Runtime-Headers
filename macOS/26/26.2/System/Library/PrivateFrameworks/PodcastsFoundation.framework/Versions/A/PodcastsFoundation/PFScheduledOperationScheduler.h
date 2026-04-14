@interface PFScheduledOperationScheduler : NSObject {
    void /* unknown type, empty encoding */ schedule;
    void /* unknown type, empty encoding */ storage;
}

@property (class, nonatomic, readonly) PFScheduledOperationScheduler *weeklyScheduler;

- (void).cxx_destruct;
- (id)init;
- (void)evaluateOperationWithIdentifier:(id)a0 evaluationHandler:(id /* block */)a1;
- (id)initWithSchedule:(id)a0 scheduleStorage:(id)a1;

@end
