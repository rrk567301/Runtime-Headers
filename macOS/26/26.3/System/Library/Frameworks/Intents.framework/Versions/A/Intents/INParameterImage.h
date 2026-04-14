@class INImage, INParameter;

@interface INParameterImage : NSObject <NSCopying>

@property (readonly, copy) INParameter *parameter;
@property (readonly, copy) INImage *image;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParameter:(id)a0 image:(id)a1;

@end
