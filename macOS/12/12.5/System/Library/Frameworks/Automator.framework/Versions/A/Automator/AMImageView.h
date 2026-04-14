@class NSImage;

@interface AMImageView : NSImageView

@property (retain, nonatomic) NSImage *originalImage;
@property (nonatomic) double opacity;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;

@end
