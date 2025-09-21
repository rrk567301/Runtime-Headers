@class _AMKeynote5Slide, NSString;

@interface _AMKeynote5Slideshow : _AMKeynote5Item

@property (copy) _AMKeynote5Slide *currentSlide;
@property (readonly) char playing;
@property (readonly) char modified;
@property (copy) NSString *name;
@property (copy) NSString *path;

- (id)slides;
- (id)docThemes;
- (id)masterSlides;

@end
