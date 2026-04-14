@interface AMPDesktopUI.TracklistTrackLockup : NSCollectionViewItem {
    void /* unknown type, empty encoding */ columnConfig;
    void /* unknown type, empty encoding */ selectionPosition;
    void /* unknown type, empty encoding */ playStateCell;
    void /* unknown type, empty encoding */ titleCell;
    void /* unknown type, empty encoding */ downloadStateCell;
    void /* unknown type, empty encoding */ durationCell;
}

@property (nonatomic) BOOL selected;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)isSelected;

@end
