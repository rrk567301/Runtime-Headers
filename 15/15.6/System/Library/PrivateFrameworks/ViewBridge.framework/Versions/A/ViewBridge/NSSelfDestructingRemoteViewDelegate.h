@interface NSSelfDestructingRemoteViewDelegate : NSObject <NSRemoteViewDelegate>

@property (readonly) char shouldRetainExportedObject;

- (void)dealloc;
- (void)viewDidInvalidate:(id)a0;

@end
