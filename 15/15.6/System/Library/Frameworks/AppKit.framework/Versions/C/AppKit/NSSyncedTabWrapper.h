@class NSWindow;

@interface NSSyncedTabWrapper : NSBaseTabData

@property (retain) NSWindow *window;
@property char snapshotIsDisabled;

- (void).cxx_destruct;
- (void)dispose;

@end
