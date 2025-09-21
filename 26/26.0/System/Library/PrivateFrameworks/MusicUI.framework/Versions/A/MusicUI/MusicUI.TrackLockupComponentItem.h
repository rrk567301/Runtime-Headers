@class NSArray;

@interface MusicUI.TrackLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ groupedInteractionIsHovered;
    void /* unknown type, empty encoding */ hideSeparators;
    void /* unknown type, empty encoding */ dragAndDropPresenter;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ favoriteView;
    void /* unknown type, empty encoding */ isSectionGrouped;
    void /* unknown type, empty encoding */ isHovered;
}

@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) NSArray *draggingImageComponents;

- (void)loadView;
- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end
