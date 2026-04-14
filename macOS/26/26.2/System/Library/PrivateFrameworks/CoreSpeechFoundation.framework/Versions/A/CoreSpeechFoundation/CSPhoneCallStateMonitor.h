@class CSFDropInCallStateNotifier;

@interface CSPhoneCallStateMonitor : CSEventMonitor {
    CSFDropInCallStateNotifier *_dropInCallNotifier;
}

+ (id)sharedInstance;

- (void)deregisterDropInCallNotification;
- (void)registerDropInCallNotificationIfNeeded;
- (BOOL)firstPartyCall;
- (void).cxx_destruct;
- (unsigned long long)phoneCallState;

@end
