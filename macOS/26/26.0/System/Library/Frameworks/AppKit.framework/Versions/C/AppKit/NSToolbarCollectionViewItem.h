@class NSFont, NSString, NSToolbarSnapshotWindow, NSToolbarLabelStack, NSGlassEffectView, NSImage, NSLayoutConstraint, NSMutableArray;

@interface NSToolbarCollectionViewItem : NSCollectionViewItem {
    NSToolbarLabelStack *_labelStack;
    NSMutableArray *_labelViews;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_imageCenterConstraint;
    NSMutableArray *_hiddenItemDecorationViews;
    NSToolbarSnapshotWindow *_snapshotWindow;
    NSGlassEffectView *_glassView;
    NSImage *_activeImage;
    NSImage *_inactiveImage;
    NSString *_accessibilityLabel;
    BOOL _snapshotInProgress;
    BOOL _deemphasized;
}

@property (class, readonly) NSFont *labelFont;

@property (retain) NSToolbarSnapshotWindow *snapshotWindow;
@property BOOL deemphasized;

+ (id)labelForPaletteLabelString:(id)a0;

- (void)updateViewConstraints;
- (void)loadView;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)prepareForReuse;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)_hiddenItemDecorationViewsToAlignedContentViews;
- (void)_invalidateImageCache;
- (BOOL)_isActiveState;
- (void)_updateVisualState;
- (BOOL)_viewControllerSupports10_10Features;
- (void)_windowKeyChanged:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)draggingImageComponents;
- (id)snapShotItemWithAvailableSize:(struct CGSize { double x0; double x1; })a0 isActive:(BOOL)a1;

@end
