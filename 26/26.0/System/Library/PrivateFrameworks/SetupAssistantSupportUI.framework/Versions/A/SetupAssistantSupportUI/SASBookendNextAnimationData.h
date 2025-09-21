@class NSString;

@interface SASBookendNextAnimationData : NSObject {
    void /* function */ language;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) double delayTillNextAnimation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 animationDuration:(double)a1 delayTillNextAnimation:(double)a2;

@end
