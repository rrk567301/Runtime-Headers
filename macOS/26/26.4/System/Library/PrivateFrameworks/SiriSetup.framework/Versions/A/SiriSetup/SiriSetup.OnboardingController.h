@protocol UNNotificationOnboardingControllerDelegate;

@interface SiriSetup.OnboardingController : NSViewController <UNNotificationOnboardingController> {
    void /* unknown type, empty encoding */ onboardingView;
}

@property (nonatomic, retain) id<UNNotificationOnboardingControllerDelegate> delegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
