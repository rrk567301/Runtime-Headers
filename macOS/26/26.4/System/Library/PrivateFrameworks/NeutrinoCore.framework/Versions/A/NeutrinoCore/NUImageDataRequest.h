@class NSString, NSDictionary;

@interface NUImageDataRequest : NUImageRenderRequest

@property (copy) NSString *dataExtractor;
@property (copy) NSDictionary *options;
@property (nonatomic) BOOL wantsAlpha;

- (id)initWithRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (id)initWithComposition:(id)a0 dataExtractor:(id)a1 options:(id)a2;
- (id)initWithMedia:(id)a0;
- (id)initWithMedia:(id)a0 dataExtractor:(id)a1 options:(id)a2;
- (id)initWithRequest:(id)a0 dataExtractor:(id)a1 options:(id)a2;
- (id)newRenderJob;

@end
