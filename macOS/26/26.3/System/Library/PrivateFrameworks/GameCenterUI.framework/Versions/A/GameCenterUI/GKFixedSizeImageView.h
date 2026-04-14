@class NSImage;

@interface GKFixedSizeImageView : NSImageView

@property (retain, nonatomic) NSImage *actualImage;

- (void)invalidateIntrinsicContentSize;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (id)image;

@end
