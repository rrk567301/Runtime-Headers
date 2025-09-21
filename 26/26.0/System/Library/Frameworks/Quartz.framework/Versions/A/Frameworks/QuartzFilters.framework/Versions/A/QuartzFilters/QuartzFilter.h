@interface QuartzFilter : NSObject {
    id _privateData;
}

+ (id)converterProperties:(id)a0 allObjects:(BOOL)a1 images:(BOOL)a2 imageBPC:(BOOL)a3 imageRenderingIntent:(unsigned int)a4;
+ (id)hostMatchingFilter:(id)a0 imageBPC:(BOOL)a1 imageRenderingIntent:(unsigned int)a2;
+ (id)imageConverter:(id)a0 bpc:(BOOL)a1 renderingIntent:(unsigned int)a2;
+ (id)quartzFilterWithOutputIntents:(id)a0;
+ (id)quartzFilterWithProperties:(id)a0;
+ (id)quartzFilterWithURL:(id)a0;

- (void)setOwner:(id)a0;
- (void)dealloc;
- (id)url;
- (void)setURL:(id)a0;
- (id)properties;
- (id)description;
- (id)localizedName;
- (void)release;
- (id)contextDictionary;
- (BOOL)applyToContext:(struct CGContext { } *)a0;
- (id)qfilter;
- (void)initWithInternalFilter:(id)a0;
- (void)removeFromContext:(struct CGContext { } *)a0;

@end
