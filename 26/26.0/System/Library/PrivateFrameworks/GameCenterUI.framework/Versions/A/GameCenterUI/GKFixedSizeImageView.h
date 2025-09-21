@class NSImage;

@interface GKFixedSizeImageView : NSImageView

@property (retain, nonatomic) NSImage *actualImage;

- (void)invalidateIntrinsicContentSize;
- (void)setImage:(id)a0;
- (id)image;
- (void).cxx_destruct;

@end
