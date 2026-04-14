@class CSFDropInCallStateNotifier;

@interface CSPhoneCallStateMonitor : CSEventMonitor {
    CSFDropInCallStateNotifier *_dropInCallNotifier;
}

+ (id)sharedInstance;

- (unsigned long long)phoneCallState;
- (BOOL)firstPartyCall;
- (void).cxx_destruct;
- (void)deregisterDropInCallNotification;
- (void)registerDropInCallNotificationIfNeeded;

@end
