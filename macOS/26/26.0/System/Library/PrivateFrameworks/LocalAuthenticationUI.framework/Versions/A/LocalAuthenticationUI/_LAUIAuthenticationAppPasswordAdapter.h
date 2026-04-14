@class LACUIPasswordField;

@interface _LAUIAuthenticationAppPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LACUIPasswordField *_appPasswordField;
}

- (BOOL)isFocused;
- (void)clear;
- (void)focus;
- (void)submit:(id)a0;
- (void).cxx_destruct;
- (void)orderOut;
- (void)unfocus;
- (id)initWithAppPasswordField:(id)a0;

@end
