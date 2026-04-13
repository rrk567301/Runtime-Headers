@interface FI_TViewController : NSViewController {
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewConfigured;
}

- (id)initWithCoder:(id)a0;
- (void)setView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)awakeFromNib;
- (id)nibBundle;
- (BOOL)_viewControllerSupports10_10Features;
- (void)initCommon;
- (void)configureView;
- (id)viewNoLoad;
- (id)initWithNibName:(id)a0;
- (BOOL)applyExtraKeyboardShortcuts:(id)a0;

@end
