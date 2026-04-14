@class NSSplitViewItemAccessoryClipView, NSView, NSSplitViewItem, NSDictionary, NSScrollEdgeEffectStyle, NSLayoutConstraint;

@interface NSSplitViewItemAccessoryViewController : NSViewController <NSAnimatablePropertyContainer> {
    NSView *_documentView;
    NSSplitViewItemAccessoryClipView *_associatedClipView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    id _animator;
    NSDictionary *_animationsDictionary;
    NSScrollEdgeEffectStyle *_preferredScrollEdgeEffectStyle;
    unsigned char _registered : 1;
    unsigned char _hidden : 1;
    unsigned char _automaticallyAppliesContentInsets : 1;
}

@property (weak) NSSplitViewItem *splitViewItem;
@property (readonly) NSView *documentView;
@property (weak, setter=_setAssociatedClipView:) NSSplitViewItemAccessoryClipView *_associatedClipView;
@property (getter=isHidden) BOOL hidden;
@property BOOL automaticallyAppliesContentInsets;
@property (retain) NSScrollEdgeEffectStyle *preferredScrollEdgeEffectStyle;
@property (copy) NSDictionary *animations;

+ (id)defaultAnimationForKey:(id)a0;

- (void)_updateContentInsets;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (id)animator;
- (void)setView:(id)a0;
- (double)_contentHeight;
- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (Class)_animatorClass;
- (unsigned long long)_barBackgroundRequirement;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsets;
- (void)_setBarBackgroundRequirement:(unsigned long long)a0;
- (void)_setHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)animationForKey:(id)a0;
- (void)removeFromParentViewController;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
