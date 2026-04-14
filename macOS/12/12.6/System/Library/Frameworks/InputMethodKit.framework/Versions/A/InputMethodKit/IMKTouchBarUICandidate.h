@interface IMKTouchBarUICandidate : IMKUICandidate

@property (nonatomic) long long annotationType;
@property (readonly, nonatomic) double maximumPadding;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)annotationAttributedStringValue;

@end
