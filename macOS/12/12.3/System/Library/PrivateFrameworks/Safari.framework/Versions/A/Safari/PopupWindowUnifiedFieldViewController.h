@class NSLayoutConstraint, PopupWindowUnifiedField;

@interface PopupWindowUnifiedFieldViewController : NSTitlebarAccessoryViewController {
    NSLayoutConstraint *_unifiedFieldWindowCenteringConstraint;
}

@property (weak, nonatomic) PopupWindowUnifiedField *popupWindowUnifiedField;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)nibName;
- (void)viewDidAppear;

@end
