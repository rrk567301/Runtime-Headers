@class NSString;

@interface VUIContentRatingBadgeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, nonatomic, getter=isTemplatedImage) char templatedImage;

- (void).cxx_destruct;
- (id)initWithResourceName:(id)a0 isTemplatedImage:(char)a1;

@end
