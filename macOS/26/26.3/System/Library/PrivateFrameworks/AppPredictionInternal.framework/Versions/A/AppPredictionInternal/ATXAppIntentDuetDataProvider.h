@interface ATXAppIntentDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;

@end
