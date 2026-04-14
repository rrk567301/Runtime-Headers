@class NSImage;

@interface AVThumbnail : NSObject

@property (readonly) NSImage *image;
@property (readonly) double time;

- (void).cxx_destruct;
- (id)init;
- (id)initWithThumbnailImage:(id)a0 time:(double)a1;

@end
