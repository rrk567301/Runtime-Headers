@class SFLocalImage;

@interface SearchUILocalImage : SearchUIImage

@property (retain, nonatomic) SFLocalImage *sfImage;

- (void)loadImageWithScale:(double)a0 isDarkStyle:(char)a1 completionHandler:(id /* block */)a2;
- (int)defaultCornerRoundingStyle;
- (char)shouldReadTemplateStatusFromLoadedImage;

@end
