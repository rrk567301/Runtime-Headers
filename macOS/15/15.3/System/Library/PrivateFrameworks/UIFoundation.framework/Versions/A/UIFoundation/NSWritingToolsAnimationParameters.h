@interface NSWritingToolsAnimationParameters : NSObject

@property (readonly) double duration;
@property (readonly) double delay;
@property (copy) id /* block */ alongsideAnimation;
@property (copy) id /* block */ alongsideCompletion;

- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 duration:(double)a1;

@end
