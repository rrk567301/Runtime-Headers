@interface RemindersUICore.TTRMReminderCellAttachmentCollectionImageItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ clippedState;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) long long highlightState;
@property (nonatomic, weak) void /* function */ selectionOverlay;
@property (nonatomic, weak) void /* function */ clippedCountLabel;

- (BOOL)isSelected;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)mouseDown:(id)a0;

@end
