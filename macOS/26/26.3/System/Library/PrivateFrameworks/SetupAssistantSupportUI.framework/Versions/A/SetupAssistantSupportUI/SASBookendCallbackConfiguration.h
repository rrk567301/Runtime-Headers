@interface SASBookendCallbackConfiguration : NSObject {
    void /* function */ onAnimationWillBegin;
    void /* function */ onAnimationDidFinish;
    void /* function */ onAnimationUIUpdateSignal;
    void /* function */ onAnimationError;
    void /* function */ onAnimationWillBeginLegacy;
    void /* function */ onAnimationDidFinishLegacy;
}

@property (nonatomic, copy) id /* block */ onAnimationWillBegin;
@property (nonatomic, copy) id /* block */ onAnimationDidFinish;
@property (nonatomic, copy) id /* block */ onAnimationUIUpdateSignal;
@property (nonatomic, copy) id /* block */ onAnimationError;
@property (nonatomic, readonly) id /* block */ onAnimationWillBeginLegacy;
@property (nonatomic, readonly) id /* block */ onAnimationDidFinishLegacy;

- (id)init;
- (void).cxx_destruct;
- (id)initOnAnimationWillBegin:(id /* block */)a0 onAnimationDidFinish:(id /* block */)a1;
- (id)initWithAnimationWillBeginBlock:(id /* block */)a0 animationDidFinishBlock:(id /* block */)a1;

@end
