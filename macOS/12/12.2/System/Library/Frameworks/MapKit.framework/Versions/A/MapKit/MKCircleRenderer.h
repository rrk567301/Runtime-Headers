@class MKCircle, VKVectorOverlayCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {
    VKVectorOverlayCircle *_vectorData;
    double _strokeStart;
    double _strokeEnd;
}

@property (readonly, nonatomic) MKCircle *circle;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

+ (Class)_mapkitLeafClass;

- (void).cxx_destruct;
- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void)_performInitialConfiguration;
- (BOOL)_canProvideVectorGeometry;
- (void)_updateRenderColors;
- (void)createPath;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;
- (id)_vectorData;
- (id)initWithCircle:(id)a0;

@end
