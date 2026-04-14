@class CSFDropInCallStateNotifier;

@interface CSPhoneCallStateMonitor : CSEventMonitor {
    CSFDropInCallStateNotifier *_dropInCallNotifier;
}

+ (id)sharedInstance;

- (BOOL)firstPartyCall;
- (void)deregisterDropInCallNotification;
- (void).cxx_destruct;
- (void)registerDropInCallNotificationIfNeeded;
- (unsigned long long)phoneCallState;

@end
