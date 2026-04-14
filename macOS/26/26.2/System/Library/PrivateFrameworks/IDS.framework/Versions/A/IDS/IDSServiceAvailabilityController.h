@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (void)_startListeningToMonitor:(id)a0;
- (void)_handleServiceMonitorNotification:(id)a0;
- (id)containerForService:(id)a0 create:(BOOL)a1;
- (BOOL)hasListenerID:(id)a0 forService:(id)a1;
- (BOOL)_isValidServiceType:(id)a0;
- (void).cxx_destruct;
- (void)_postNotificationForService:(id)a0 availability:(long long)a1;
- (long long)availabilityForListenerID:(id)a0 forService:(id)a1;
- (BOOL)addListenerID:(id)a0 forService:(id)a1;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (void)_stopListeningToMonitor:(id)a0;
- (id)init;
- (void)dealloc;

@end
