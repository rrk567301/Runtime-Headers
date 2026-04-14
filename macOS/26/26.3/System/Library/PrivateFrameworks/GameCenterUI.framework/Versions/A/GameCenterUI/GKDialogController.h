@class NSWindow, NSViewController;

@interface GKDialogController : NSResponder

@property (readonly, nonatomic) NSViewController *viewController;
@property (weak) NSWindow *parentWindow;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)mainWindow;
+ (id)sharedDialogController;

- (Class)classForCoder;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)presentViewController:(id)a0;
- (void)dismiss:(id)a0;

@end
