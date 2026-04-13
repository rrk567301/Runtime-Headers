@class NSArray;

@interface MusicUI.TrackLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ dragAndDropPresenter;
    void /* unknown type, empty encoding */ trackContentDescriptor;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ favoriteView;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ isHovered;
}

@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) NSArray *draggingImageComponents;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillLayout;
- (BOOL)isSelected;

@end
