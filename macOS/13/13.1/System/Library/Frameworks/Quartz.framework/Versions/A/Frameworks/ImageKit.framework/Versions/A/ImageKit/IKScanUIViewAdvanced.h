@class NSMutableDictionary, IKScanUIControllerAdvanced, IKScannerPreviewAdvanced, IKScannerParameterView, NSScrollView, NSButton, IKUIHelper;

@interface IKScanUIViewAdvanced : NSView <IKUIHelper> {
    BOOL _didSetupWindowNotifications;
    IKUIHelper *_uiHelperTopLevel;
    NSMutableDictionary *_bindingInfo;
}

@property IKScanUIControllerAdvanced *scanUIControllerAdvanced;
@property NSButton *simpleButton;
@property NSButton *overviewButton;
@property NSButton *scanButton;
@property IKScannerPreviewAdvanced *preview;
@property IKScannerParameterView *scannerParameterView;
@property NSScrollView *scrollView;

- (void)dealloc;
- (void)cleanup;
- (void)remove;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithController:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)install;
- (void)setupBindings;
- (void)unbindAll;
- (void)installWindowNotifications:(id)a0;
- (void)uninstallWindowNotifications;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRectForIdentifier:(id)a0;
- (unsigned long long)controlSizeForIdentifier:(id)a0;
- (void)addBindingInfo:(id)a0 object:(id)a1;
- (void)createAllViews;
- (void)windowStateDidChange:(id)a0;

@end
