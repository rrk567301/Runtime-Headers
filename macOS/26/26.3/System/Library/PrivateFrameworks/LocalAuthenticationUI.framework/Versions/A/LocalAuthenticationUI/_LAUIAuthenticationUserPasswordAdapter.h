@class LAUIUserPasswordViewController;

@interface _LAUIAuthenticationUserPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LAUIUserPasswordViewController *_userPasswordVC;
}

- (BOOL)isFocused;
- (void)clear;
- (void).cxx_destruct;
- (void)focus;
- (void)submit:(id)a0;
- (void)orderOut;
- (void)unfocus;
- (id)initWithUserPasswordVC:(id)a0;

@end
