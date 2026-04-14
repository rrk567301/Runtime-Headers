@class NSDictionary, MRAction;

@interface MRAnimationTrigger : NSObject

@property (retain, nonatomic) MRAction *action;
@property double startValue;
@property double lastValue;
@property (readonly) NSDictionary *animationAttributes;
@property (readonly) BOOL isArmed;

- (void)disarm;
- (id)initWithAction:(id)a0;
- (void)dealloc;
- (double)rearmIfNeededWithDefaultValue:(double)a0;

@end
