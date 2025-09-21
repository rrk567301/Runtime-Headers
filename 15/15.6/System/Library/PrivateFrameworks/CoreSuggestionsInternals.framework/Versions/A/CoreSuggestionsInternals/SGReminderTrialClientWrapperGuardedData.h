@class NSNumber, NSDictionary;

@interface SGReminderTrialClientWrapperGuardedData : NSObject {
    char _confirmationOptional;
    char _triggerOptional;
    char _actionVerbOptional;
    NSNumber *_messagesBannerLimit;
    NSDictionary *_reminderOverrides;
    NSDictionary *_reminderEnrichments;
    NSDictionary *_reminderInputMapping;
    NSDictionary *_reminderOutputMapping;
}

- (void).cxx_destruct;

@end
