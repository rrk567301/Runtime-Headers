@class SFMediaMetadata;

@interface SearchUIPreferredMediaAppIcon : SearchUIAppIconImage

@property (retain) SFMediaMetadata *mediaMetadata;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithMediaMetadata:(id)a0 variant:(unsigned long long)a1;

@end
