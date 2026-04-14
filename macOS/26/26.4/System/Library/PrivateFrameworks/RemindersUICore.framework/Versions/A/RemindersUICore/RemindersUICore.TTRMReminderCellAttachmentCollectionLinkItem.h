@interface RemindersUICore.TTRMReminderCellAttachmentCollectionLinkItem : NSCollectionViewItem <LPLinkViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ preferredSizeClass;
    void /* unknown type, empty encoding */ linkView;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) long long highlightState;
@property (nonatomic, weak) void /* function */ selectionOverlay;

- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)linkViewNeedsResize:(id)a0;

@end
