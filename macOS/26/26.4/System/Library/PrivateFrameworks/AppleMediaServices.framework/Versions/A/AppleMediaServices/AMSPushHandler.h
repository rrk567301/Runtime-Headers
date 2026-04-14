@class NSDictionary, AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerDelegate, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject

@property (readonly) NSDictionary *enabledParsables;
@property (readonly) id<AMSPushHandlerContract> bagContract;
@property (readonly) id<AMSBagProtocol> bag;
@property (weak) id<AMSPushHandlerDelegate> delegate;
@property (readonly) AMSPushConfiguration *configuration;

+ (id)accountIsEligibleForPushNotifications:(id)a0 accountStore:(id)a1;

- (void)registerForEngagementPushes;
- (id)initWithConfiguration:(id)a0 bag:(id)a1;
- (void)handleNotification:(id)a0;
- (id)initWithConfiguration:(id)a0 bagContract:(id)a1;
- (void)_handlePushNotification:(id)a0;
- (BOOL)shouldHandleNotification:(id)a0;
- (void).cxx_destruct;
- (BOOL)_validatePayloadFlags:(id)a0;
- (void)dealloc;
- (BOOL)_passesiCloudTermsVerification:(id)a0;

@end
