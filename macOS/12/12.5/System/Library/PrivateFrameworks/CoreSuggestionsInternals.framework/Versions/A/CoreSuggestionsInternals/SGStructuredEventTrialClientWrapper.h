@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)supportedProviders;
- (id)engineConfig;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (void)updateFactors;
- (BOOL)foundInMailNotifications;
- (id)baseModelName;
- (id)notificationsAllowListOverride;

@end
