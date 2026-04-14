@class NSImage, NSString, NSToolbarLabelStack, NSToolbarSnapshotWindow, NSLayoutConstraint, NSFont, NSMutableArray;

@interface NSToolbarCollectionViewItem : NSCollectionViewItem {
    NSToolbarLabelStack *_labelStack;
    NSMutableArray *_labelViews;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_imageCenterConstraint;
    NSToolbarSnapshotWindow *_snapshotWindow;
    NSImage *_activeImage;
    NSImage *_inactiveImage;
    NSString *_accessibilityLabel;
    BOOL _snapshotInProgress;
}

@property (class, readonly) NSFont *labelFont;

@property (retain) NSToolbarSnapshotWindow *snapshotWindow;

+ (id)labelForPaletteLabelString:(id)a0;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityAttributeValue:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;
- (void)updateViewConstraints;
- (void)_windowKeyChanged:(id)a0;
- (void)_updateVisualState;
- (BOOL)_isActiveState;
- (id)snapShotItemWithAvailableSize:(struct CGSize { double x0; double x1; })a0 isActive:(BOOL)a1;
- (void)_invalidateImageCache;

@end
