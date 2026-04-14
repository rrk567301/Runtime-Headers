@class NSObject, NSString, NSDate;
@protocol OS_dispatch_queue;

@interface RTXPCTimerAlarm : NSObject

@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSString *identifier;

- (void)setup;
- (void)_setup;
- (BOOL)invalidate;
- (void)_resetState;
- (void)_invalidate;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)onNotification:(id)a0;
- (void)_deregisterAlarm;
- (void)_fireWithDate:(id)a0 shouldWake:(BOOL)a1;
- (void)_handleDurationExpiry;
- (BOOL)_isEndDateValid:(id)a0;
- (void)_onNotification:(id)a0;
- (void)_setAlarmWithEndDate:(id)a0 shouldWake:(BOOL)a1 userVisible:(BOOL)a2;
- (BOOL)fireWithDate:(id)a0 error:(id *)a1;
- (BOOL)fireWithDate:(id)a0 shouldWake:(BOOL)a1 error:(id *)a2;

@end
