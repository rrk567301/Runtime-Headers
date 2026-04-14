@class QLControlsContainerView, NSArray, NSDictionary, NSView, QLControlsCenteringView, NSMutableDictionary, NSMutableArray;
@protocol QLControlsDelegate;

@interface QLControlsController : NSObject {
    NSDictionary *_controlsDict;
    QLControlsCenteringView *_centeringView;
    NSView *_contentView;
    BOOL _needsRelayout;
    NSMutableDictionary *_buttons;
    NSMutableDictionary *_segmentedControls;
    NSMutableArray *_shownControlElements;
}

@property (readonly) QLControlsContainerView *containerView;
@property (weak) id<QLControlsDelegate> delegate;
@property (copy) NSDictionary *controlsDict;
@property (retain, nonatomic) NSView *controlsView;
@property (copy) NSArray *collectionKeys;
@property unsigned long long controlSize;
@property (nonatomic) int buttonStyle;
@property (nonatomic) long long alignment;
@property (readonly) double effectiveWidth;
@property double extraWidth;

+ (double)paddingBetweenControls;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setContainerView:(id)a0;
- (void)setNeedsRelayout;
- (double)_separatorHeight;
- (void)_containerViewDidChangeFrame:(id)a0;
- (id)_shownControlElements;
- (void)_updateControlWithIdentifier:(id)a0;
- (id)_controlWithIdentifier:(id)a0;
- (id)_controlUIForForIdentifier:(id)a0;
- (id)_controlIdentifiersForSegmentedControlWithIdentifier:(id)a0;
- (void)_controlBinding:(id)a0 shouldTriggerRelayout:(BOOL *)a1 update:(BOOL *)a2;
- (id)_bindedControl:(id)a0 withBinding:(id *)a1;
- (void)bind:(id)a0 ofControlWithIdentifier:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)unbind:(id)a0 ofControlWithIdentifier:(id)a1;
- (void)_updateInternalViews;
- (void)_setupCenteringViewConstraintsInControlsView;
- (void)_layoutControls;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameOfControlWithIdentifier:(id)a0;
- (BOOL)controlIsHidden:(id)a0;
- (void)_relayoutIfNeeded;

@end
