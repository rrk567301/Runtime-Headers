@interface QuartzFilter : NSObject {
    id _privateData;
}

+ (id)converterProperties:(id)a0 allObjects:(char)a1 images:(char)a2 imageBPC:(char)a3 imageRenderingIntent:(unsigned int)a4;
+ (id)hostMatchingFilter:(id)a0 imageBPC:(char)a1 imageRenderingIntent:(unsigned int)a2;
+ (id)imageConverter:(id)a0 bpc:(char)a1 renderingIntent:(unsigned int)a2;
+ (id)quartzFilterWithOutputIntents:(id)a0;
+ (id)quartzFilterWithProperties:(id)a0;
+ (id)quartzFilterWithURL:(id)a0;

- (void)release;
- (void)dealloc;
- (id)description;
- (void)setOwner:(id)a0;
- (void)setURL:(id)a0;
- (id)url;
- (id)localizedName;
- (id)properties;
- (id)contextDictionary;
- (char)applyToContext:(struct CGContext { } *)a0;
- (id)qfilter;
- (void)initWithInternalFilter:(id)a0;
- (void)removeFromContext:(struct CGContext { } *)a0;

@end
