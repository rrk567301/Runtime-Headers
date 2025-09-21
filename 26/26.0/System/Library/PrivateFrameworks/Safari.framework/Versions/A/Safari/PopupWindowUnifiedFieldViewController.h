@class NSLayoutConstraint, PopupWindowUnifiedField;

@interface PopupWindowUnifiedFieldViewController : NSTitlebarAccessoryViewController {
    NSLayoutConstraint *_unifiedFieldWindowCenteringConstraint;
}

@property (weak, nonatomic) PopupWindowUnifiedField *popupWindowUnifiedField;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;

@end
