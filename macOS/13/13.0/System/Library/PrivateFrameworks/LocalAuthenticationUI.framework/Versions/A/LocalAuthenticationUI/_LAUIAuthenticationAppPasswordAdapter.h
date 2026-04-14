@class LAUIPasswordField;

@interface _LAUIAuthenticationAppPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LAUIPasswordField *_appPasswordField;
}

- (void).cxx_destruct;
- (void)clear;
- (void)orderOut;
- (BOOL)isFocused;
- (void)submit:(id)a0;
- (void)focus;
- (void)unfocus;
- (id)initWithAppPasswordField:(id)a0;

@end
