@class LAUIUserPasswordViewController;

@interface _LAUIAuthenticationUserPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LAUIUserPasswordViewController *_userPasswordVC;
}

- (void).cxx_destruct;
- (void)clear;
- (void)orderOut;
- (BOOL)isFocused;
- (void)submit:(id)a0;
- (void)focus;
- (id)initWithUserPasswordVC:(id)a0;
- (void)unfocus;

@end
