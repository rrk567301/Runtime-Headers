@class NSString;

@interface MMRemindersService : MMService <MMServiceDataclassActionPerforming, MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (char)isDataService;
- (void)performDataclassActionsForService:(id)a0 willEnable:(char)a1 shouldCreate:(char)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;

@end
