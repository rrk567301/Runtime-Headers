@class NSImage;

@interface NSButtonImageView : _NSSimpleImageView

@property (retain, nonatomic) NSImage *image;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (int)_vibrancyBlendMode;

@end
