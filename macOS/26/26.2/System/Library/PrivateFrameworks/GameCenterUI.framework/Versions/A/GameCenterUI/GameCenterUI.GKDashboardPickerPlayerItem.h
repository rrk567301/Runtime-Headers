@interface GameCenterUI.GKDashboardPickerPlayerItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ pickerPlayerCell;
    void /* unknown type, empty encoding */ selectable;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
