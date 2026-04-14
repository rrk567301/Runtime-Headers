@class NSString, NSImage, NSLayoutConstraint;

@interface AMSplitView : NSSplitView {
    NSImage *_splitterDimple;
    NSImage *_splitterBackground;
}

@property (retain) NSLayoutConstraint *breadthConstraint;
@property BOOL isCollapsing;
@property (readonly, nonatomic) NSString *_expandedPositionUserDefaultsName;
@property BOOL collapsesToRightOrBottom;
@property (nonatomic) double expandedPosition;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawDividerInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDividerStyle:(long long)a0;
- (double)dividerThickness;
- (double)positionOfDividerAtIndex:(long long)a0;
- (void)setPosition:(double)a0 ofDividerAtIndex:(long long)a1;
- (void)_autosaveSubviewLayoutIfNecessary;
- (void)expand;
- (void)collapse;
- (void)disengageBreadthConstraint;
- (void)updateExpandedPositionWithProposedPosition:(double)a0 ofSubViewAt:(long long)a1;
- (void)applyExpandedPosition;
- (BOOL)usesCustomDivider;
- (void)hideSubview:(id)a0;
- (void)engageBreadthConstraintForSubview:(id)a0;
- (void)_collapse:(BOOL)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)expandWithAnimation:(BOOL)a0;
- (void)collapseWithAnimation:(BOOL)a0;

@end
