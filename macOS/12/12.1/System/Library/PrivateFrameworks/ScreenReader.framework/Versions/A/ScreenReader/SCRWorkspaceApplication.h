@interface SCRWorkspaceApplication : NSApplication

@property (nonatomic) BOOL isRunLoopActive;

- (void)run;
- (void)terminate:(id)a0;
- (void)stop:(id)a0;
- (void)_stopRunLoop;

@end
