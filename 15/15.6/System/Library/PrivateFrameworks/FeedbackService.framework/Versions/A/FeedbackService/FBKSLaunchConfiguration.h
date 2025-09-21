@class FBKSLaunchConfiguration_FrameworkPrivateName, NSString;

@interface FBKSLaunchConfiguration : NSObject

@property (retain, nonatomic) FBKSLaunchConfiguration_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) id _swiftObject;
@property (nonatomic) char skipsPrompt;
@property (nonatomic) char alwaysUseRemoteAlertController;
@property (nonatomic) char notifyImmediately;
@property (nonatomic) long long promptStyle;
@property (copy, nonatomic) NSString *localizedPromptTitle;
@property (copy, nonatomic) NSString *localizedPromptMessage;
@property (copy, nonatomic) NSString *localizedAlertViewProceedButtonTitle;
@property (copy, nonatomic) NSString *localizedAlertViewDeclineButtonTitle;

- (id)init;
- (void).cxx_destruct;

@end
