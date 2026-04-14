@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary *options;
@property unsigned int transitionFlags;
@property (copy) NSString *type;
@property (copy) NSString *subtype;
@property float startProgress;
@property float endProgress;
@property (retain) id filter;

+ (id)CA_attributes;

- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (void *)_copyRenderAnimationForLayer:(id)a0;

@end
