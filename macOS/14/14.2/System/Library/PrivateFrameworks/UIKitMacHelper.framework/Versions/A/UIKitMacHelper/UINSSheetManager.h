@class UIWindow, NSString, UINSSceneHostingViewController, NSWindow;

@interface UINSSheetManager : NSObject <NSWindowDelegate, UINSSceneHostingViewControllerDelegate> {
    NSWindow *_sheetWindow;
    struct CGSize { double width; double height; } _initialUIContentSize;
    UINSSceneHostingViewController *_sceneHost;
    id /* block */ _setupCompletionHandler;
}

@property (readonly, nonatomic) UIWindow *sheetUIWindow;
@property (readonly, nonatomic) UIWindow *parentUIWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissSheet;
- (id)initWithSheetWindow:(id)a0 parentWindow:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 setupCompletionHandler:(id /* block */)a3;
- (void)sceneHostingViewControllerDidCreateScene:(id)a0;
- (void)updateSheetSize:(struct CGSize { double x0; double x1; })a0;

@end
