@class NSWindow, NSViewController;

@interface GKDialogController : NSResponder

@property (readonly, nonatomic) NSViewController *viewController;
@property (weak) NSWindow *parentWindow;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)mainWindow;
+ (id)sharedDialogController;

- (BOOL)presentViewController:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)dealloc;
- (void)dismiss:(id)a0;

@end
