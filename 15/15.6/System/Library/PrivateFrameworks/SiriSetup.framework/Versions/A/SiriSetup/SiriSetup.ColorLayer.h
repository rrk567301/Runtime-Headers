@interface SiriSetup.ColorLayer : CAShapeLayer {
    void /* unknown type, empty encoding */ layerRedColor;
    void /* unknown type, empty encoding */ layerBlueColor;
    void /* unknown type, empty encoding */ layerBackgroundColor;
}

@property (nonatomic) double phase;

+ (char)needsDisplayForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)display;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;

@end
