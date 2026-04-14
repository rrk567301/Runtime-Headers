@interface SCRWorkspaceApplication : NSApplication

@property (nonatomic) BOOL isRunLoopActive;

- (void)stop:(id)a0;
- (void)run;
- (id)_topLevelScriptingObject;
- (void)terminate:(id)a0;
- (void)_stopRunLoop;

@end
