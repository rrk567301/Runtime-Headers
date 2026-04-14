@class NSString, FI_TPieChartProgressLayer, NSImageView;

@interface FI_TInlineProgressView : FI_TUpdateLayerView <NSAccessibilityProgressIndicator> {
    FI_TPieChartProgressLayer *_pieChartLayer;
    NSImageView *_templateImageView;
}

@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) double progress;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) BOOL isProgressAnimationCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initCommon;
- (id)accessibilityValue;
- (void)layout;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (void)setProgressDidCompleteHandler:(const void *)a0;

@end
