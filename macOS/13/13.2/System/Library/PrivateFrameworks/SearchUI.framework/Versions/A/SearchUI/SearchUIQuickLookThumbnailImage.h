@class NSURL, QLThumbnailGenerationRequest, FPItemID;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) FPItemID *fpItemID;
@property (weak) QLThumbnailGenerationRequest *request;
@property BOOL isCompact;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)classForCoder;
- (void).cxx_destruct;
- (void)updateSize;
- (void)setupRequest:(id)a0;
- (unsigned long long)representationType;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithSFImage:(id)a0;
- (id)initWithResult:(id)a0 url:(id)a1 isCompact:(BOOL)a2;
- (void)generateImageWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
