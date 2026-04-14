@class SFMediaMetadata;

@interface SearchUIPreferredMediaAppIcon : SearchUIAppIconImage

@property (retain) SFMediaMetadata *mediaMetadata;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithMediaMetadata:(id)a0 variant:(unsigned long long)a1;

@end
