@class KTStatus, TUIKTStateManager;

@interface TUIKTAppIntentsData : NSObject

@property (retain, nonatomic) TUIKTStateManager *stateManager;
@property (retain, nonatomic) KTStatus *ktStatus;

- (void).cxx_destruct;
- (id)init;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)publicVerificationCodeWithCompletion:(id /* block */)a0;

@end
