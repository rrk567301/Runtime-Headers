@interface RemindersUICore.TTRMReminderCellAttachmentCollectionImageItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ clippedState;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) long long highlightState;
@property (nonatomic, weak) void /* function */ selectionOverlay;
@property (nonatomic, weak) void /* function */ clippedCountLabel;

- (void)mouseDown:(id)a0;
- (void)viewDidLoad;
- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
