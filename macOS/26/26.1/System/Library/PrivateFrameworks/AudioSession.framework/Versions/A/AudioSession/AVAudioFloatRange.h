@interface AVAudioFloatRange : NSObject

@property (readonly, nonatomic) float minimum;
@property (readonly, nonatomic) float maximum;

- (id)initWithMin:(float)a0 max:(float)a1;
- (id)description;

@end
