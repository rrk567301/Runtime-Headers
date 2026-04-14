@interface BU_TViewController : NSViewController {
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewConfigured;
}

- (id)initWithCoder:(id)a0;
- (void)setView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)loadView;
- (id)nibBundle;
- (id)initWithNibName:(id)a0;
- (void)initCommon;
- (void)configureView;
- (id)viewNoLoad;
- (BOOL)applyExtraKeyboardShortcuts:(id)a0;

@end
