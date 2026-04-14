@interface HUComfortSoundsFilterPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double xValue;
@property (nonatomic) double yValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)frequencyForBandPass;
- (double)gainForHighResonance;
- (double)gainForLeftBellFilters;
- (double)gainForLowResonance;
- (double)gainForRightBellFilters;
- (double)linearTransformation:(double)a0 inputMin:(double)a1 inputMax:(double)a2 outputMin:(double)a3 outputMax:(double)a4;
- (double)widthForBandPass;

@end
