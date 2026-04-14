@interface NSScriptingAppleEventHandler : NSObject

+ (id)sharedScriptingAppleEventHandler;

- (id)secureCommandEvent:(id)a0 withReplyEvent:(id)a1;
- (void)handleGetAETEEvent:(id)a0 withReplyEvent:(id)a1;
- (void)handleCommandEvent:(id)a0 withReplyEvent:(id)a1;
- (void)registerNormalHandlersForCommandDescription:(id)a0;
- (void)registerForCommandDescription:(id)a0;
- (void)_registerForCommandDescription:(id)a0 onlySecurityHandlers:(BOOL)a1;

@end
