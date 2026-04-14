@interface ATXToolKitActionStream : NSObject

+ (void)sanitizeTitleForToolKitIntents:(id)a0 withCompletion:(id /* block */)a1;

- (id)getToolKitActionEventsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getToolKitActionEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (id)getToolKitActionEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3;
- (id)lastDateOfToolKitAction;
- (unsigned long long)numberOfToolKitActionEventsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
