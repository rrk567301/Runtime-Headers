@class OSAScriptView;

@interface OSAScriptAssistantStrategy : NSObject {
    OSAScriptView *_scriptView;
}

- (id)initWithScriptView:(id)a0;
- (id)scriptView;
- (BOOL)getItems:(id *)a0 withInfoString:(id)a1;
- (void)setScriptView:(id)a0;

@end
