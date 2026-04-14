@class ATXPOICategoryEventAggregator, ATXPOICategoryVisitDataProvider;

@interface ATXPOICategoryVisitDuetDataProvider : ATXDuetDataProvider {
    ATXPOICategoryEventAggregator *_streamAggregator;
    ATXPOICategoryVisitDataProvider *_dataProvider;
}

+ (id)sharedInstance;
+ (Class)supportedDuetEventClass;

- (id)getCurrentVisit;
- (void).cxx_destruct;
- (id)init;
- (void)subscribeToPOIChangesForCategory:(id)a0 observer:(id)a1 enterSelector:(SEL)a2 exitSelector:(SEL)a3;
- (void)unsubscribeToPOIChanges;
- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4;

@end
