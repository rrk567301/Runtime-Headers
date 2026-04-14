@class SUCoreEventReporter;

@interface SUTelemetryReporter : NSObject

@property SUCoreEventReporter *coreEventReporter;

- (void)indicateOnceIdle:(id /* block */)a0;
- (void)flushEvents;
- (id)init;
- (BOOL)reportEventToCoreAnalyticsWithName:(id)a0 payload:(id)a1;
- (BOOL)reportEventToSplunkWithName:(id)a0 payload:(id)a1;

@end
