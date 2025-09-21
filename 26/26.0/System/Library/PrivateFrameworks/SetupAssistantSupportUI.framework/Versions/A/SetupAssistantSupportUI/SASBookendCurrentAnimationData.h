@class NSString;

@interface SASBookendCurrentAnimationData : NSObject {
    void /* function */ language;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) double animationDuration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 animationDuration:(double)a1;

@end
