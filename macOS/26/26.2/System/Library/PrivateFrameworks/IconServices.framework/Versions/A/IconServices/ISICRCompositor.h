@class NSMutableDictionary, ISCompositingDescriptor;

@interface ISICRCompositor : NSObject

@property (copy, nonatomic) id /* block */ iconStack;
@property (retain) ISCompositingDescriptor *compositingDescriptor;
@property (readonly) NSMutableDictionary *finalizedIcons;

- (void).cxx_destruct;
- (id)_fallbackImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_finalizedIconForCompositingDescriptor:(id)a0;
- (id)_keyForCompositingDescriptor:(id)a0;
- (id)imageForCompositingDescriptor:(id)a0;
- (id)initWithIconStackBlock:(id /* block */)a0;
- (id)layerDataForCompositingDescriptor:(id)a0;

@end
