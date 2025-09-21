@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleServiceMonitorNotification:(id)a0;
- (char)_isValidServiceType:(id)a0;
- (void)_postNotificationForService:(id)a0 availability:(long long)a1;
- (void)_startListeningToMonitor:(id)a0;
- (void)_stopListeningToMonitor:(id)a0;
- (char)addListenerID:(id)a0 forService:(id)a1;
- (long long)availabilityForListenerID:(id)a0 forService:(id)a1;
- (id)containerForService:(id)a0 create:(char)a1;
- (char)hasListenerID:(id)a0 forService:(id)a1;
- (char)removeListenerID:(id)a0 forService:(id)a1;

@end
