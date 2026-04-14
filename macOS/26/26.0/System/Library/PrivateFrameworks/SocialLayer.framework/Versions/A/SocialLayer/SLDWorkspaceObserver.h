@class NSRunningApplication;

@interface SLDWorkspaceObserver : NSObject

@property (retain) NSRunningApplication *frontmostApplication;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
