@protocol NUScalePolicy;

@interface NUGeometryRequest : NURenderRequest

@property (retain) id<NUScalePolicy> scalePolicy;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
