@class NSURL;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

@property (retain, nonatomic) NSURL *url;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithSFImage:(id)a0;

@end
