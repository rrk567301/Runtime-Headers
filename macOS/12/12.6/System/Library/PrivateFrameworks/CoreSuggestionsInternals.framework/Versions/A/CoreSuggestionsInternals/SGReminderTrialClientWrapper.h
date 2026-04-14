@class _PASLock;

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)triggerOptional;
- (id)messagesBannerLimit;
- (id)reminderEnrichments;
- (id)reminderOverrides;
- (id)reminderInputMapping;
- (id)reminderOutputMapping;
- (void)updateFactors;
- (id)baseModelName;
- (BOOL)confirmationOptional;
- (BOOL)actionVerbOptional;

@end
