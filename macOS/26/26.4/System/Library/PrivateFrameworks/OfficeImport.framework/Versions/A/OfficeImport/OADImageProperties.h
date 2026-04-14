@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)hasImageFill;
- (id)imageFill;
- (void)setImageFill:(id)a0;

@end
