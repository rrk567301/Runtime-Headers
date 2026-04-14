@class NSString;

@interface SASBookendAnimationUpdateUIData : NSObject {
    void /* function */ language;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) double remainingDuration;
@property (nonatomic, readonly) BOOL isInitialDrawing;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLanguage:(id)a0 remainingDuration:(double)a1 isInitialDrawing:(BOOL)a2;

@end
