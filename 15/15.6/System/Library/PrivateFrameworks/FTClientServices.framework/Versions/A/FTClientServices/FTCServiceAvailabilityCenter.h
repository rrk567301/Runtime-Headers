@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_handleServiceMonitorNotification:(id)a0;
- (char)_isValidServiceType:(long long)a0;
- (void)_postNotificationForService:(long long)a0 availability:(long long)a1;
- (void)_startListeningToMonitor:(id)a0;
- (void)_stopListeningToMonitor:(id)a0;
- (char)addListenerID:(id)a0 forService:(long long)a1;
- (long long)availabilityForListenerID:(id)a0 forService:(long long)a1;
- (id)containerForService:(long long)a0 create:(char)a1;
- (char)hasListenerID:(id)a0 forService:(long long)a1;
- (char)removeListenerID:(id)a0 forService:(long long)a1;

@end
