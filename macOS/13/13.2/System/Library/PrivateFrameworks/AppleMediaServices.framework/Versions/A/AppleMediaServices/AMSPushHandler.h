@class NSDictionary, AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerDelegate, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject

@property (readonly) NSDictionary *enabledParsables;
@property (readonly) id<AMSPushHandlerContract> bagContract;
@property (readonly) id<AMSBagProtocol> bag;
@property (weak) id<AMSPushHandlerDelegate> delegate;
@property (readonly) AMSPushConfiguration *configuration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)handleNotification:(id)a0;
- (void)_handlePushNotification:(id)a0;
- (id)initWithConfiguration:(id)a0 bag:(id)a1;
- (BOOL)shouldHandleNotification:(id)a0;
- (void)registerForEngagementPushes;
- (id)initWithConfiguration:(id)a0 bagContract:(id)a1;

@end
