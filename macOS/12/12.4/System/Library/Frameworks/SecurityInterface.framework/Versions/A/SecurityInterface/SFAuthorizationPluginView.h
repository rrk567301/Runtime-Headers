@interface SFAuthorizationPluginView : NSObject {
    const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *_callbacks;
    struct __OpaqueAuthorizationEngine { } *_engineRef;
    void *_private;
}

- (void)dealloc;
- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)buttonPressed:(int)a0;
- (id)firstResponder;
- (id)firstKeyView;
- (id)lastKeyView;
- (const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)callbacks;
- (BOOL)loadPlugin;
- (struct { Class x0; id x1; } *)internals;
- (void)didActivate;
- (id)privateDelegate;
- (void)setPrivateDelegate:(id)a0;
- (id)_getHintString:(const char *)a0;
- (struct __OpaqueAuthorizationEngine { } *)engineRef;
- (id)firstResponderView;
- (id)initWithCallbacks:(const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 andEngineRef:(struct __OpaqueAuthorizationEngine { } *)a1;
- (void)didDeactivate;
- (void)willActivateWithUser:(id)a0;
- (id)viewForType:(int)a0;
- (id)lastError;
- (void)setButton:(int)a0 enabled:(BOOL)a1;
- (void)updateView;
- (void)displayView;

@end
