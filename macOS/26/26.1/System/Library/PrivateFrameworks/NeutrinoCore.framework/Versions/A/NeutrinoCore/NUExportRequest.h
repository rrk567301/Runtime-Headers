@class NSURL;
@protocol NUScalePolicy;

@interface NUExportRequest : NURenderRequest

@property (copy) NSURL *destinationURL;
@property (retain) id<NUScalePolicy> scalePolicy;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0 destinationURL:(id)a1;
- (id)initWithMedia:(id)a0 destinationURL:(id)a1;

@end
