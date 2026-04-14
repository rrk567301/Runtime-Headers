@class CSFDropInCallStateNotifier;

@interface CSPhoneCallStateMonitor : CSEventMonitor {
    CSFDropInCallStateNotifier *_dropInCallNotifier;
}

+ (id)sharedInstance;

- (BOOL)firstPartyCall;
- (unsigned long long)phoneCallState;
- (void)deregisterDropInCallNotification;
- (void).cxx_destruct;
- (void)registerDropInCallNotificationIfNeeded;

@end
