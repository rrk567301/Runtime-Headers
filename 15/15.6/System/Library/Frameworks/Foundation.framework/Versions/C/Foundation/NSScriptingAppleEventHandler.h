@interface NSScriptingAppleEventHandler : NSObject

+ (id)sharedScriptingAppleEventHandler;

- (void)_registerForCommandDescription:(id)a0 onlySecurityHandlers:(char)a1;
- (void)handleCommandEvent:(id)a0 withReplyEvent:(id)a1;
- (void)handleGetAETEEvent:(id)a0 withReplyEvent:(id)a1;
- (void)registerForCommandDescription:(id)a0;
- (void)registerNormalHandlersForCommandDescription:(id)a0;
- (id)secureCommandEvent:(id)a0 withReplyEvent:(id)a1;

@end
