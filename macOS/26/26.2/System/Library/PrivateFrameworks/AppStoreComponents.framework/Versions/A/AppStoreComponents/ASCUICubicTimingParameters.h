@class CAMediaTimingFunction;

@interface ASCUICubicTimingParameters : NSObject <NSCopying>

@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly, nonatomic) long long animationCurve;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnimationCurve:(long long)a0;
- (id)init;

@end
