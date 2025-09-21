@interface SiriSetup.ColorLayer : CAShapeLayer {
    void /* unknown type, empty encoding */ layerRedColor;
    void /* unknown type, empty encoding */ layerBlueColor;
    void /* unknown type, empty encoding */ layerBackgroundColor;
}

@property (nonatomic) double phase;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (id)init;
- (void)display;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
