@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactors;
- (id)supportedProviders;
- (id)engineConfig;
- (id)baseModelName;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (BOOL)foundInMailNotifications;
- (id)notificationsAllowListOverride;

@end
