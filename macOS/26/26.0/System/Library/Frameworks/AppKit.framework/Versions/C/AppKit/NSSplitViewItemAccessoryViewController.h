@class NSSplitViewItemAccessoryClipView, NSView, NSSplitViewItem, NSDictionary, NSLayoutConstraint;

@interface NSSplitViewItemAccessoryViewController : NSViewController <NSAnimatablePropertyContainer> {
    NSView *_documentView;
    NSSplitViewItemAccessoryClipView *_associatedClipView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    id _animator;
    NSDictionary *_animationsDictionary;
    unsigned long long _barBackgroundRequirement;
    unsigned char _registered : 1;
    unsigned char _hidden : 1;
    unsigned char _automaticallyAppliesContentInsets : 1;
}

@property (weak) NSSplitViewItem *splitViewItem;
@property (readonly) NSView *documentView;
@property (weak, setter=_setAssociatedClipView:) NSSplitViewItemAccessoryClipView *_associatedClipView;
@property (getter=isHidden) BOOL hidden;
@property BOOL automaticallyAppliesContentInsets;
@property (copy) NSDictionary *animations;

+ (id)defaultAnimationForKey:(id)a0;

- (id)animator;
- (void)viewWillDisappear;
- (void)_updateContentInsets;
- (void)dealloc;
- (void)setView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (double)_contentHeight;
- (id)initWithCoder:(id)a0;
- (id)view;
- (void).cxx_destruct;
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
