@interface AMSUIAppearance : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)_colorWithDictionary:(id)a0;
- (id)_gradientImageWithDictionary:(id)a0;
- (id)_gradientLayerTypeForRawValue:(id)a0;
- (id)_imageSymbolConfigurationStyleWithDictionary:(id)a0;
- (id)_imageSymbolConfigurationTextStyleWithDictionary:(id)a0;
- (id)_backgroundColorWithDictionary:(id)a0;
- (id)_backgroundImageWithDictionary:(id)a0;
- (id)_fontWithDictionary:(id)a0;
- (id)_imageSymbolConfigurationWithDictionary:(id)a0;

@end
