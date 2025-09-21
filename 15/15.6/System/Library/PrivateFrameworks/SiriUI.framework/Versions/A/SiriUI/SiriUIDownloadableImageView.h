@class NSImageView, NSString, NSBundle, NSURL;

@interface SiriUIDownloadableImageView : NSView {
    NSImageView *_imageView;
    NSURL *_imageURL;
    char _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    double _placeHolderVerticalOffset;
}

- (void).cxx_destruct;
- (void)layout;
- (void)setImageURL:(id)a0;
- (void)_setImage:(id)a0 isPlaceHolder:(char)a1;
- (id)initWithImageURL:(id)a0 placeHolderImageName:(id)a1 placeHolderImageBundle:(id)a2;
- (void)setPlaceHolderImageName:(id)a0;
- (void)setPlaceHolderVerticalOffset:(double)a0;
- (void)showPlaceHolderImage;

@end
