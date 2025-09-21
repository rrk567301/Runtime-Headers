@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (id)description;
- (void).cxx_destruct;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)hasImageFill;
- (id)imageFill;
- (void)setImageFill:(id)a0;

@end
