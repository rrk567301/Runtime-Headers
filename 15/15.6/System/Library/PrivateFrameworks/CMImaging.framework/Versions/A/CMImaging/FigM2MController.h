@interface FigM2MController : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxUpscale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxDownscale;

- (void)dealloc;
- (id)init;
- (int)transform:(struct __CVBuffer { } *)a0 srcRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dst:(struct __CVBuffer { } *)a2 sync_m2m:(BOOL)a3;
- (int)_transform:(struct __CVBuffer { } *)a0 srcRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dst:(struct __CVBuffer { } *)a2 dstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 symmetricTransform:(unsigned int)a4 sync_m2m:(BOOL)a5;
- (int)clearHistorgramMode;
- (int)copyHistogram:(struct { unsigned int x0; unsigned int x1[384]; unsigned int *x2; unsigned int *x3; unsigned int *x4; } *)a0;
- (int)downsample:(struct __CVBuffer { } *)a0 dst:(struct __CVBuffer { } *)a1 sync_m2m:(BOOL)a2;
- (int)queryCapabilities;
- (int)setCustomFilter:(int)a0 alignment:(int)a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 destinationWidth:(unsigned long long)a4 destinationHeight:(unsigned long long)a5 luma_param:(float)a6 chroma_param:(float)a7;
- (int)setCustomFilter:(int)a0 alignment:(int)a1 src:(struct __CVBuffer { } *)a2 dst:(struct __CVBuffer { } *)a3 luma_param:(float)a4 chroma_param:(float)a5;
- (int)setHistogramMode:(int)a0 dstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)transform:(struct __CVBuffer { } *)a0 srcRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dst:(struct __CVBuffer { } *)a2 dstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 rotate:(int)a4 flipX:(BOOL)a5 flipY:(BOOL)a6 sync_m2m:(BOOL)a7;
- (int)transform:(struct __CVBuffer { } *)a0 srcRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dst:(struct __CVBuffer { } *)a2 dstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 rotate:(int)a4 sync_m2m:(BOOL)a5;

@end
