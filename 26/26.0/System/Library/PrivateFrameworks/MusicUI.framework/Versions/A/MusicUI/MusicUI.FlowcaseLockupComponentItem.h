@interface MusicUI.FlowcaseLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButton;
    void /* unknown type, empty encoding */ coverArtworkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlayView;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ artworkView;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end
