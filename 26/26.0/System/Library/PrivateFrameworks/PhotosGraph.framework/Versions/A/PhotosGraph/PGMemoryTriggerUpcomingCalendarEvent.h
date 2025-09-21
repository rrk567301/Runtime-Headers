@class CLSServiceManager, CLSLocationCache;

@interface PGMemoryTriggerUpcomingCalendarEvent : PGMemoryTrigger {
    CLSServiceManager *_serviceManager;
    CLSLocationCache *_locationCache;
}

- (unsigned long long)triggerType;
- (void).cxx_destruct;
- (id)initWithServiceManager:(id)a0 locationCache:(id)a1 loggingConnection:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
