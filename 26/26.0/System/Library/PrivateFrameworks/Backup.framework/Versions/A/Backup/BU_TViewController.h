@interface BU_TViewController : NSViewController {
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewConfigured;
}

- (void)loadView;
- (void)setView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)initCommon;
- (void)awakeFromNib;
- (id)nibBundle;
- (BOOL)applyExtraKeyboardShortcuts:(id)a0;
- (void)configureView;
- (id)initWithNibName:(id)a0;
- (id)viewNoLoad;

@end
