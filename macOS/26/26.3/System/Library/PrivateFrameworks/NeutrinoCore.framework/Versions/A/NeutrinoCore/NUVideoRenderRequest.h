@class NUColorSpace;
@protocol NUScalePolicy;

@interface NUVideoRenderRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain) id<NUScalePolicy> scalePolicy;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
