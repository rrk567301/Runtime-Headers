@interface SCRWorkspaceApplication : NSApplication

@property (nonatomic) BOOL isRunLoopActive;

- (void)run;
- (void)stop:(id)a0;
- (id)_topLevelScriptingObject;
- (void)terminate:(id)a0;
- (void)_stopRunLoop;

@end
