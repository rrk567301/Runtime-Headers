@interface PKPaymentAuthorizationLayout : NSObject

@property (readonly, nonatomic) double contentHorizontalMargin;
@property (readonly, nonatomic) double viewDefaultWidth;
@property (readonly, nonatomic) double viewMaximumHeight;
@property (readonly, nonatomic) double itemLabelTrailingLimit;
@property (readonly, nonatomic) double itemLabelValueMargin;
@property (readonly, nonatomic) double itemLabelFirstBaselineMargin;
@property (readonly, nonatomic) double itemLabelLastBaselineMargin;
@property (readonly, nonatomic) double itemValueFirstBaselineMargin;
@property (readonly, nonatomic) double itemValueLastBaselineDefaultMargin;
@property (readonly, nonatomic) double itemValueLastBaselineSummaryMargin;
@property (readonly, nonatomic) double itemValueLastBaselineEmphasisMargin;
@property (readonly, nonatomic) double itemAccessoryHorizontalMargin;
@property (readonly, nonatomic) struct CGSize { double width; double height; } glyphSize;

+ (id)defaultLayout;

- (id)init;

@end
