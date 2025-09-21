@interface PKLayoutConstants : NSObject

@property (class, readonly, nonatomic) double inkAttributesPickerViewOuterPadding;
@property (class, readonly, nonatomic) double inkAttributesPickerViewInnerPadding;
@property (class, readonly, nonatomic) double inkAttributesPickerViewCornerRadius;
@property (class, readonly, nonatomic) double inkThicknessButtonCornerRadius;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } inkThicknessButtonSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } strokeWeightButtonSize;

+ (void)initialize;
+ (double)inkAttributesPickerViewCornerRadius;
+ (double)inkAttributesPickerViewInnerPadding;
+ (double)inkAttributesPickerViewOuterPadding;
+ (double)inkThicknessButtonCornerRadius;
+ (struct CGSize { double x0; double x1; })inkThicknessButtonSize;
+ (struct CGSize { double x0; double x1; })strokeWeightButtonSize;

@end
