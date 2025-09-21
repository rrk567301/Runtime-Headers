@interface CSPhoneCallStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (char)firstPartyCall;
- (unsigned long long)phoneCallState;

@end
