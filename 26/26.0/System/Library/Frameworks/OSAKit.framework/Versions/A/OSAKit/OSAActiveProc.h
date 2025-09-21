@class OSAScriptView;

@interface OSAActiveProc : NSObject {
    void *_oldRefCon;
    void /* function */ *_oldActiveProc;
    void /* function */ *_activeProc;
    OSAScriptView *_scriptView;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithScriptView:(id)a0;

@end
