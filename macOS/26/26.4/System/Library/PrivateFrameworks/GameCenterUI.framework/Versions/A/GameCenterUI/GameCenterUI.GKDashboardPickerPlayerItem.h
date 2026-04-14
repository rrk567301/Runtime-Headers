@interface GameCenterUI.GKDashboardPickerPlayerItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ pickerPlayerCell;
    void /* unknown type, empty encoding */ selectable;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;

@end
