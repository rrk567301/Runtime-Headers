@class NSMutableArray, NSRemoteViewController;
@protocol LACUIUserPasswordViewController;

@interface LACUIAuthenticationSheetPasswordFieldBuilder : NSObject {
    NSMutableArray *_pendingHandlers;
    BOOL _busy;
    NSRemoteViewController<LACUIUserPasswordViewController> *_controller;
    NSRemoteViewController<LACUIUserPasswordViewController> *_type;
}

- (id)initWithType:(id)a0;
- (void)warmup;
- (void).cxx_destruct;
- (void)buildPasswordFieldWithCompletion:(id /* block */)a0;

@end
