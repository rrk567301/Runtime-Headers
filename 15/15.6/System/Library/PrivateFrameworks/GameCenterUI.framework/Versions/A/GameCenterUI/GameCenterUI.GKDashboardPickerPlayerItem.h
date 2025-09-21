@interface GameCenterUI.GKDashboardPickerPlayerItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ pickerPlayerCell;
    void /* unknown type, empty encoding */ selectable;
}

@property (nonatomic) char selected;
@property (nonatomic) char highlighted;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (char)isHighlighted;
- (char)isSelected;

@end
