@class OSAScriptView;

@interface OSAScriptAssistantStrategy : NSObject {
    OSAScriptView *_scriptView;
}

- (id)initWithScriptView:(id)a0;
- (id)scriptView;
- (void)setScriptView:(id)a0;
- (BOOL)getItems:(id *)a0 withInfoString:(id)a1;

@end
