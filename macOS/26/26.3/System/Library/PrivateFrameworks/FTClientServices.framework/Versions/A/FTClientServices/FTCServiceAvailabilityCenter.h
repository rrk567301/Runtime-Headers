@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (void)_stopListeningToMonitor:(id)a0;
- (id)containerForService:(long long)a0 create:(BOOL)a1;
- (long long)availabilityForListenerID:(id)a0 forService:(long long)a1;
- (void)_postNotificationForService:(long long)a0 availability:(long long)a1;
- (id)init;
- (BOOL)hasListenerID:(id)a0 forService:(long long)a1;
- (BOOL)_isValidServiceType:(long long)a0;
- (void)dealloc;
- (void)_startListeningToMonitor:(id)a0;
- (BOOL)addListenerID:(id)a0 forService:(long long)a1;
- (BOOL)removeListenerID:(id)a0 forService:(long long)a1;
- (void)_handleServiceMonitorNotification:(id)a0;

@end
