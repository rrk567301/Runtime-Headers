@class _PASLock;

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)triggerOptional;
- (BOOL)actionVerbOptional;
- (id)baseModelName;
- (BOOL)confirmationOptional;
- (id)messagesBannerLimit;
- (id)reminderEnrichments;
- (id)reminderInputMapping;
- (id)reminderOutputMapping;
- (id)reminderOverrides;
- (void)updateFactors;

@end
