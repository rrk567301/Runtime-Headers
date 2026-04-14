@class NSString;

@interface HKOSEligibilityDataSource : NSObject {
    id /* block */ _answerOverrideHandler;
    NSString *_darwinNotificationOverride;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)getAnswer:(unsigned long long *)a0 forDomain:(unsigned long long)a1 error:(id *)a2;
- (id)initWithAnswerOverrideHandler:(id /* block */)a0 darwinNotificationOverride:(id)a1;
- (id)notificationNameForDomain:(unsigned long long)a0;

@end
