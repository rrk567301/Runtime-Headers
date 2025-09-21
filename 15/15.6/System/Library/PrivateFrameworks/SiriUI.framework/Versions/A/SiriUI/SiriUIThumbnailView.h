@class NSImage, SiriUIRoundedCornerImageView;

@interface SiriUIThumbnailView : NSView {
    SiriUIRoundedCornerImageView *_imageView;
}

@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
