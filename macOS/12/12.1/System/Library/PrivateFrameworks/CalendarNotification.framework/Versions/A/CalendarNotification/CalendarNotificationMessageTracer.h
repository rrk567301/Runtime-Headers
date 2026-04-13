@class PETScalarEventTracker;

@interface CalendarNotificationMessageTracer : NSObject

@property (retain, nonatomic) PETScalarEventTracker *predictionTracker;

+ (id)_eventTypeProperties;
+ (void)messageTraceEventType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
