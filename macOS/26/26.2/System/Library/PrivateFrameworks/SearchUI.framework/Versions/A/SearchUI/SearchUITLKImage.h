@class SearchUIImage;

@interface SearchUITLKImage : TLKImage

@property (retain) SearchUIImage *searchUIImage;

- (void).cxx_destruct;
- (double)aspectRatio;
- (BOOL)hasMultipleRepresentations;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithSearchUIImage:(id)a0;

@end
