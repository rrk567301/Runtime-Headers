@class NSImage;

@interface _NSStoredImageSimpleImageView : _NSSimpleImageView

@property (retain, nonatomic) NSImage *image;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;

@end
