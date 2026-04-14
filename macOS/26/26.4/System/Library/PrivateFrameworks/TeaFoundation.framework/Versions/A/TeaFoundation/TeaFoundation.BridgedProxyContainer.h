@protocol TFRegistrationContainer, TFCallbackRegistration;

@interface TeaFoundation.BridgedProxyContainer : NSObject <TFContainerRegistry>

@property (nonatomic, retain) id<TFRegistrationContainer> publicContainer;
@property (nonatomic, retain) id<TFRegistrationContainer> privateContainer;
@property (nonatomic, retain) id<TFCallbackRegistration> callback;

- (void).cxx_destruct;
- (id)init;

@end
