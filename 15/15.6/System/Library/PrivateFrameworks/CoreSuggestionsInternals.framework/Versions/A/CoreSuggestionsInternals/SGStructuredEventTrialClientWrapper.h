@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)baseModelName;
- (id)engineConfig;
- (char)foundInMailNotifications;
- (id)notificationsAllowListOverride;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (id)supportedProviders;
- (void)updateFactors;

@end
