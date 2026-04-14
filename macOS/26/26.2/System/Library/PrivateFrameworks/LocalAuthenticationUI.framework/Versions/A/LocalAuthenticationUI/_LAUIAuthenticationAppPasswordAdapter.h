@class LACUIPasswordField;

@interface _LAUIAuthenticationAppPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LACUIPasswordField *_appPasswordField;
}

- (void)clear;
- (BOOL)isFocused;
- (void)submit:(id)a0;
- (void)focus;
- (void).cxx_destruct;
- (void)orderOut;
- (void)unfocus;
- (id)initWithAppPasswordField:(id)a0;

@end
