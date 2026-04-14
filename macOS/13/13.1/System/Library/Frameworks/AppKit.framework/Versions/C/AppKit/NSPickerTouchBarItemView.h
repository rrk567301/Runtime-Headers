@class NSString, NSColor, NSTouchBarItem, NSTouchBarItemOverlay, NSImage, NSMutableArray, NSButton, NSLayoutConstraint, NSSegmentedControl;

@interface NSPickerTouchBarItemView : NSView {
    NSButton *_collapsedButton;
    NSSegmentedControl *_segmentedControl;
    long long _controlRepresentation;
    long long _effectiveControlRepresentation;
    BOOL _enabled;
    NSMutableArray *_images;
    NSMutableArray *_labels;
    NSTouchBarItemOverlay *_overlay;
    struct CGSize { double width; double height; } _minimumCollapsedSize;
    struct CGSize { double width; double height; } _minimumExpandedSize;
    struct CGSize { double width; double height; } _maximumExpandedSize;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property long long numberOfOptions;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property long long controlRepresentation;
@property long long selectionMode;
@property long long selectedIndex;
@property (copy) NSColor *selectionColor;
@property (copy) NSString *collapsedRepresentationLabel;
@property (retain) NSImage *collapsedRepresentationImage;
@property (weak) NSTouchBarItem *sourceItemForOverlay;

+ (id)makeStandardActivatePopoverGestureRecognizer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (id)imageAtIndex:(long long)a0;
- (void)setImage:(id)a0 atIndex:(long long)a1;
- (id)labelAtIndex:(long long)a0;
- (void)setLabel:(id)a0 atIndex:(long long)a1;
- (BOOL)isEnabledAtIndex:(long long)a0;
- (void)setEnabled:(BOOL)a0 atIndex:(long long)a1;
- (void)_showPressHoldPopup:(id)a0;
- (struct CGSize { double x0; double x1; })_minimumCollapsedSize;
- (struct CGSize { double x0; double x1; })_minimumExpandedSize;
- (struct CGSize { double x0; double x1; })_maximumExpandedSize;
- (void)_invalidateCachedSizes;
- (id)makeStandardActivatePopoverGestureRecognizer;
- (void)_optionInvoked;
- (void)_showPopover;
- (id)_imageToDisplayAtIndex:(long long)a0;
- (void)_createPickerControl;
- (void)_loadCollapsedRepresentation;
- (id)_effectiveCollapsedRepresentationLabel;
- (id)_effectiveCollapsedRepresentationImage;
- (void)_updateCollapsedRepresentation;
- (void)_unloadCollapsedRepresentation;
- (void)_configureAsExpandedRepresentation;
- (void)_configureAsCollapsedRepresentation;
- (id)_disclosureTouchBar;

@end
