@class NSString, CATextLayer;

@interface ErrorLayer : CALayer {
    struct CGColor { } *glowColor;
}

@property (retain, nonatomic) CATextLayer *topTextLayer;
@property (retain, nonatomic) CATextLayer *textLayer1;
@property (retain, nonatomic) CATextLayer *textLayer2;
@property (retain, nonatomic) CATextLayer *textLayer3;
@property (nonatomic) struct CGColor { } *glowColor;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double textOpacity;

- (void)dealloc;
- (id)init;
- (id)layer;
- (void)layoutSublayers;
- (void)setGlowColor:(struct CGColor { } *)a0;
- (void)composeLayer;
- (struct CGColor { } *)glowColor;
- (id)fadeInAnimation;
- (void)fadeIn;

@end
