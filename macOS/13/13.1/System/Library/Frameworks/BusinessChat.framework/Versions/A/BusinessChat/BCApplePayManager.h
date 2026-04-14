@protocol BCApplePayManagerDelegate;

@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol>

@property (weak, nonatomic) id<BCApplePayManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)message;
- (long long)applePayStatus;
- (void)presentApplePayWithWindow:(id)a0;
- (id)initWithMessage:(id)a0 delegate:(id)a1;

@end
