@class OSAScriptView;

@interface OSAScriptAssistantStrategy : NSObject {
    OSAScriptView *_scriptView;
}

- (char)getItems:(id *)a0 withInfoString:(id)a1;
- (id)initWithScriptView:(id)a0;
- (id)scriptView;
- (void)setScriptView:(id)a0;

@end
