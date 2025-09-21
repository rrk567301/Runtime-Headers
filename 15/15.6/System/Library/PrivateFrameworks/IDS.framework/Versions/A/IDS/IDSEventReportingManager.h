@interface IDSEventReportingManager : NSObject

- (void)reportClientEvent:(id)a0 withCompletion:(id /* block */)a1;
- (char)serverEnabledEventReporting;

@end
