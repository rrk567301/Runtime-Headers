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

- (void)updateLayer;
- (void)layout;
- (void)viewDidChangeBackingProperties;
- (id)accessibilityValue;
- (void)initCommon;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (void)setProgressDidCompleteHandler:(const void *)a0;

@end
