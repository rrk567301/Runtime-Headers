@class CSFDropInCallStateNotifier;

@interface CSPhoneCallStateMonitor : CSEventMonitor {
    CSFDropInCallStateNotifier *_dropInCallNotifier;
}

+ (id)sharedInstance;

- (BOOL)firstPartyCall;
- (void)deregisterDropInCallNotification;
- (void)registerDropInCallNotificationIfNeeded;
- (unsigned long long)phoneCallState;
- (void).cxx_destruct;

@end
