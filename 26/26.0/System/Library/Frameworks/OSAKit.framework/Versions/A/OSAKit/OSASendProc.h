@class OSAScriptView;

@interface OSASendProc : NSObject {
    void *_oldRefCon;
    void /* function */ *_oldSendProc;
    void /* function */ *_sendProc;
    OSAScriptView *_scriptView;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithScriptView:(id)a0;

@end
