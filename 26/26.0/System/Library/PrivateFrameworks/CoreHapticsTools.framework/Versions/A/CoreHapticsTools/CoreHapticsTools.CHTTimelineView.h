@interface CoreHapticsTools.CHTTimelineView : CoreHapticsTools.CHTBaseView {
    void /* unknown type, empty encoding */ flipTimeline;
}

@property (nonatomic, readonly) BOOL wantsDefaultClipping;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)makeBackingLayer;

@end
