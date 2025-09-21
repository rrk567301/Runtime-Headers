@protocol NUScalePolicy;

@interface NUGeometryRequest : NURenderRequest

@property (retain) id<NUScalePolicy> scalePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)submitSynchronous:(out id *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
