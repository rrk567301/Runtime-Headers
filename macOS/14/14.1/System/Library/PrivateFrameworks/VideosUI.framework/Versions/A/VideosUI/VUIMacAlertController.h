@class NSString, NSWindow, NSMutableArray;

@interface VUIMacAlertController : VUIAlertController

@property (retain, nonatomic) NSWindow *alert;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

+ (id)vui_alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void).cxx_destruct;
- (void)layout;
- (void)buttonPressed:(id)a0;
- (BOOL)isDarkMode;
- (id)createAttributedText:(id)a0 fontSize:(double)a1 bold:(BOOL)a2;
- (id)createTextField:(id)a0;
- (void)positionTextField:(id)a0 verticalOrigin:(long long)a1;
- (id)prependedImage:(id)a0 toString:(id)a1;
- (void)vui_addAction:(id)a0 isPreferred:(BOOL)a1;
- (void)vui_dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)vui_presentAlertFromPresentingController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
