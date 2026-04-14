@interface FI_TViewController : NSViewController {
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewConfigured;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)initCommon;
- (id)initWithCoder:(id)a0;
- (void)setView:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)awakeFromNib;
- (id)nibBundle;
- (BOOL)applyExtraKeyboardShortcuts:(id)a0;
- (void)configureView;
- (id)initWithNibName:(id)a0;
- (id)viewNoLoad;

@end
