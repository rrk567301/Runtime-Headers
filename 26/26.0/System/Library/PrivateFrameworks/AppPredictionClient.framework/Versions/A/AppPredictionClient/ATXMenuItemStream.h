@interface ATXMenuItemStream : NSObject

- (id)getMenuItemEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3;
- (void)_enumerateMenuItemEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 reversed:(BOOL)a3 block:(id /* block */)a4;
- (id)_getIntentEventFromBMAppMenuItem:(id)a0 bundleIdFilter:(id)a1;
- (id)getMenuItemEventsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getMenuItemEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (unsigned long long)numberOfMenuItemEventsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
