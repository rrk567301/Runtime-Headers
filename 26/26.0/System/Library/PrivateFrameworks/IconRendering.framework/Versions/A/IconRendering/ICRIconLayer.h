@class CUINamedIconLayerStack;

@interface ICRIconLayer : CALayer {
    void /* unknown type, empty encoding */ _iconStyle;
    void /* unknown type, empty encoding */ displayedIcon;
    void /* unknown type, empty encoding */ iconLayer;
    void /* unknown type, empty encoding */ _device;
}

@property (nonatomic, retain) CUINamedIconLayerStack *icon;
@property (nonatomic) unsigned long long iconAppearance;
@property (nonatomic) double lightAngle;
@property (nonatomic) struct { double x0; double x1; } lightAngles;
@property (nonatomic) double lightIntensity;
@property (nonatomic) struct { double x0; double x1; double x2; } lightDirection;
@property (nonatomic) BOOL drawMitigatedVersion;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (void)setTintColor:(struct CGColor { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFinalizedIcon:(id)a0;
- (id)initWithIcon:(id)a0;
- (BOOL)displayIcon:(id)a0 error:(id *)a1;
- (id)initWithDeviceClass:(long long)a0 appearance:(unsigned long long)a1 renderingMode:(id)a2;
- (id)initWithIcon:(id)a0 deviceClass:(long long)a1 appearance:(unsigned long long)a2 renderingMode:(id)a3;

@end
