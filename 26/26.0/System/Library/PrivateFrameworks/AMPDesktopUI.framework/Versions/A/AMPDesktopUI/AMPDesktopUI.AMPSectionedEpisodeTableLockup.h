@class NSFormatter, NSArray;
@protocol AMPSectionedEpisodeTableLockupModel;

@interface AMPDesktopUI.AMPSectionedEpisodeTableLockup : AMPDesktopUI.AMPFlippedDocumentView <AMPRolloverTableViewDelegate> {
    void /* unknown type, empty encoding */ kViewModelDataObservationContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_diffableDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionHeaderHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_episodeCellHeight;
}

@property (nonatomic, retain) id<AMPSectionedEpisodeTableLockupModel> viewModel;
@property (nonatomic, weak) void /* function */ theTable;
@property (nonatomic, weak) void /* function */ leadingConstraint;
@property (nonatomic, weak) void /* function */ trailingConstraint;
@property (nonatomic, retain) NSFormatter *durationFormatter;
@property (nonatomic, copy) NSArray *selectedModels;

+ (id)lockup;

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableDoubleClicked:(id)a0;
- (void)tableView:(id)a0 setRollover:(BOOL)a1 forRow:(long long)a2;

@end
