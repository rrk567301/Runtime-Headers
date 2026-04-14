@class NSImage;

@interface GKFixedSizeImageView : NSImageView

@property (retain, nonatomic) NSImage *actualImage;

- (id)image;
- (void)invalidateIntrinsicContentSize;
- (void)setImage:(id)a0;
- (void).cxx_destruct;

@end
