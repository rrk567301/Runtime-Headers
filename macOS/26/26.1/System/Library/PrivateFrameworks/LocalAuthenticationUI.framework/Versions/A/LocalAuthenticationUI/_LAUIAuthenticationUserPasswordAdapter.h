@class LAUIUserPasswordViewController;

@interface _LAUIAuthenticationUserPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LAUIUserPasswordViewController *_userPasswordVC;
}

- (BOOL)isFocused;
- (void)clear;
- (void)submit:(id)a0;
- (void)focus;
- (void).cxx_destruct;
- (void)orderOut;
- (void)unfocus;
- (id)initWithUserPasswordVC:(id)a0;

@end
