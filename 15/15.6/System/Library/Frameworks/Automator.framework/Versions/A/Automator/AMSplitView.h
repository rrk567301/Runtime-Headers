@class NSString, NSImage, NSLayoutConstraint;

@interface AMSplitView : NSSplitView {
    NSImage *_splitterDimple;
    NSImage *_splitterBackground;
}

@property (retain) NSLayoutConstraint *breadthConstraint;
@property char isCollapsing;
@property (readonly, nonatomic) NSString *_expandedPositionUserDefaultsName;
@property char collapsesToRightOrBottom;
@property (nonatomic) double expandedPosition;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_autosaveSubviewLayoutIfNecessary;
- (void)collapse;
- (void)disengageBreadthConstraint;
- (double)dividerThickness;
- (void)drawDividerInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)expand;
- (double)positionOfDividerAtIndex:(long long)a0;
- (void)setDividerStyle:(long long)a0;
- (void)setPosition:(double)a0 ofDividerAtIndex:(long long)a1;
- (void)_collapse:(char)a0 animated:(char)a1 completionHandler:(id /* block */)a2;
- (void)applyExpandedPosition;
- (void)collapseWithAnimation:(char)a0;
- (void)engageBreadthConstraintForSubview:(id)a0;
- (void)expandWithAnimation:(char)a0;
- (void)hideSubview:(id)a0;
- (void)updateExpandedPositionWithProposedPosition:(double)a0 ofSubViewAt:(long long)a1;
- (char)usesCustomDivider;

@end
