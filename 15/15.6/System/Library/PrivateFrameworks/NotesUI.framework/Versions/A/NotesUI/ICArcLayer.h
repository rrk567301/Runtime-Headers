@interface ICArcLayer : ICCircleLayer

@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) char drawClockwise;

- (void)drawInContext:(struct CGContext { } *)a0;

@end
