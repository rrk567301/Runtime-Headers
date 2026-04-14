@class NSView, NSString;

@interface VUINSNavigationPaletteView : NSView <VUINSNavigationBarVisibilityThresholdProviding>

@property (retain, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (double)visibilityThreshold;

@end
