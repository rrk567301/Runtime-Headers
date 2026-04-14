@class CALayer, MTCoreMaterialVisualStylingProvider;
@protocol MTVisualStylingCapable;

@interface MTVisualStylingLayerHelper : NSObject

@property (weak, nonatomic) CALayer<MTVisualStylingCapable> *layer;
@property (readonly, nonatomic) MTCoreMaterialVisualStylingProvider *visualStylingProvider;

+ (id)_unserializedAttributeKeys;
+ (id)CA_attributes;
+ (id)_attributeKeys;

- (void).cxx_destruct;
- (void)_configureVisualStylingProviderIfNecessary;
- (BOOL)_updateVisualStylingProvider;
- (id)initWithVisualStylingCapableLayer:(id)a0;
- (void)visualStylingCapableLayer:(id)a0 didChangeValueForKey:(id)a1;

@end
