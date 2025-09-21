@protocol TFRegistrationContainer, TFCallbackRegistration;

@interface TeaFoundation.BridgedProxyContainer : NSObject <TFContainerRegistry>

@property (nonatomic, retain) id<TFRegistrationContainer> publicContainer;
@property (nonatomic, retain) id<TFRegistrationContainer> privateContainer;
@property (nonatomic, retain) id<TFCallbackRegistration> callback;

- (id)init;
- (void).cxx_destruct;

@end
