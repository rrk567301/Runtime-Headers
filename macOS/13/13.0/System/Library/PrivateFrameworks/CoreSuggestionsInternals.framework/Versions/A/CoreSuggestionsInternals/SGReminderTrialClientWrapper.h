@class _PASLock;

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactors;
- (id)reminderOverrides;
- (id)baseModelName;
- (BOOL)confirmationOptional;
- (BOOL)triggerOptional;
- (BOOL)actionVerbOptional;
- (id)messagesBannerLimit;
- (id)reminderEnrichments;
- (id)reminderInputMapping;
- (id)reminderOutputMapping;

@end
