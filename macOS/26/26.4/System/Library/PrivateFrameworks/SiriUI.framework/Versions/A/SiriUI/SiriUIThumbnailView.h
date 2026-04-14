@class NSImage, SiriUIRoundedCornerImageView;

@interface SiriUIThumbnailView : NSView {
    SiriUIRoundedCornerImageView *_imageView;
}

@property (retain, nonatomic) NSImage *image;

- (void)updateLayer;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;

@end
