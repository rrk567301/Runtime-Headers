@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasImageFill;
- (id)imageFill;
- (void)setImageFill:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;

@end
