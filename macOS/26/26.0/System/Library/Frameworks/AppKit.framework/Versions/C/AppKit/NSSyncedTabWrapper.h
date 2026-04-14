@class NSWindow;

@interface NSSyncedTabWrapper : NSBaseTabData

@property (retain) NSWindow *window;
@property BOOL snapshotIsDisabled;

- (void)dispose;
- (void).cxx_destruct;

@end
