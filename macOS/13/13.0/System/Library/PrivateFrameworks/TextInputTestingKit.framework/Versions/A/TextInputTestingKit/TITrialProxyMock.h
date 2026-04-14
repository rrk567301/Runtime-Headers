@class NSString;

@interface TITrialProxyMock : NSObject <TITrialProxy>

@property (readonly) id trialNotificationSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodedTrialParametersForLocale:(id)a0;

@end
