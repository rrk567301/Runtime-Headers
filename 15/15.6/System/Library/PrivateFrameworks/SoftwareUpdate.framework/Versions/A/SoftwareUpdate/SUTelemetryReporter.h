@class SUCoreEventReporter;

@interface SUTelemetryReporter : NSObject

@property SUCoreEventReporter *coreEventReporter;

- (id)init;
- (void)flushEvents;
- (void)indicateOnceIdle:(id /* block */)a0;
- (char)reportEventToCoreAnalyticsWithName:(id)a0 payload:(id)a1;
- (char)reportEventToSplunkWithName:(id)a0 payload:(id)a1;

@end
