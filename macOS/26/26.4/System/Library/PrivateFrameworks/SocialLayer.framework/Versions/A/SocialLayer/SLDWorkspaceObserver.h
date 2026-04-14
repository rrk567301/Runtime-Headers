@class NSRunningApplication;

@interface SLDWorkspaceObserver : NSObject

@property (retain) NSRunningApplication *frontmostApplication;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
