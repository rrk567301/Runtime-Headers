@class NSDictionary, NSString;

@interface CUIMutableNamedIconLayerStack : CUINamedIconLayerStack {
    double _scale;
    struct CGSize { double width; double height; } _size;
    NSDictionary *_properties;
    NSString *_appearance;
}

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSDictionary *renderingProperties;

- (void)dealloc;
- (void)setAppearance:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (id)appearance;
- (void)addLayer:(id)a0;
- (id)initWithName:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 atScale:(double)a2;
- (void)removeLayerAtIndex:(unsigned long long)a0;

@end
