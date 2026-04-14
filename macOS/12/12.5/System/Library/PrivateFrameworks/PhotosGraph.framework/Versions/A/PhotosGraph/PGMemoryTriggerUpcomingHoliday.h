@class NSSet;

@interface PGMemoryTriggerUpcomingHoliday : PGHolidayMemoryTrigger {
    NSSet *_validHolidaysNames;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)initWithLoggingConnection:(id)a0 holidayService:(id)a1;

@end
