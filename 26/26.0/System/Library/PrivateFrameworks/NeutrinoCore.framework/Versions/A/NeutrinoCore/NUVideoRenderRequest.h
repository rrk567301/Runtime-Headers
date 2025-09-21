@class NUColorSpace;
@protocol NUScalePolicy;

@interface NUVideoRenderRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain) id<NUScalePolicy> scalePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
