@interface GameCenterUI.GKDashboardPickerPlayerItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ pickerPlayerCell;
    void /* unknown type, empty encoding */ selectable;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (BOOL)isHighlighted;
- (BOOL)isSelected;

@end
