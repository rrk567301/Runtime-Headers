@class NSLayoutConstraint, PopupWindowUnifiedField;

@interface PopupWindowUnifiedFieldViewController : NSTitlebarAccessoryViewController {
    NSLayoutConstraint *_unifiedFieldWindowCenteringConstraint;
}

@property (weak, nonatomic) PopupWindowUnifiedField *popupWindowUnifiedField;

- (void)viewDidAppear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;

@end
