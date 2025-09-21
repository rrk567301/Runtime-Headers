@class UINSSceneWindowController, UIViewController;

@interface UINSServiceViewController : NSServiceViewController

@property (retain, nonatomic) UINSSceneWindowController *windowController;
@property (retain, nonatomic) UIViewController *rootUIViewController;

+ (void)initialize;

- (void)loadView;
- (void)dealloc;
- (id)_redirectTarget:(id)a0 forSelector:(SEL)a1;
- (BOOL)_respondsToAction:(SEL)a0 forTarget:(id)a1;
- (BOOL)_validateTarget:(id)a0 forAction:(SEL)a1;
- (BOOL)controllerIsMarzipan;
- (unsigned int)declinedEventMask;

@end
