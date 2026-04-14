@interface BU_TViewController : NSViewController {
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewConfigured;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)initCommon;
- (void)setView:(id)a0;
- (void)awakeFromNib;
- (id)nibBundle;
- (BOOL)applyExtraKeyboardShortcuts:(id)a0;
- (void)configureView;
- (id)initWithNibName:(id)a0;
- (id)viewNoLoad;

@end
