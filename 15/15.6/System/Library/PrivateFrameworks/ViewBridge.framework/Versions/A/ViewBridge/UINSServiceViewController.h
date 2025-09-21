@class UINSSceneWindowController, UIViewController;

@interface UINSServiceViewController : NSServiceViewController

@property (retain, nonatomic) UINSSceneWindowController *windowController;
@property (retain, nonatomic) UIViewController *rootUIViewController;

+ (void)initialize;

- (void)dealloc;
- (void)loadView;
- (id)_redirectTarget:(id)a0 forSelector:(SEL)a1;
- (char)_respondsToAction:(SEL)a0 forTarget:(id)a1;
- (char)_validateTarget:(id)a0 forAction:(SEL)a1;
- (char)controllerIsMarzipan;
- (unsigned int)declinedEventMask;

@end
