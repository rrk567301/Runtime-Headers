@interface MKIconManager : NSObject

+ (id)_imageForFeatureStyleAttributes:(id)a0 iconText:(id)a1 size:(unsigned long long)a2 forScale:(double)a3 navMode:(char)a4 nightMode:(char)a5;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 navMode:(char)a3;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 navMode:(char)a3 nightMode:(char)a4;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 nightMode:(char)a3;
+ (id)iconManager;
+ (id)imageForIconID:(unsigned int)a0 contentScale:(double)a1 sizeGroup:(unsigned long long)a2 nightMode:(char)a3;
+ (id)imageForMapItem:(id)a0 forScale:(double)a1;
+ (id)imageForMapItem:(id)a0 forScale:(double)a1 fallbackToBundleIcon:(char)a2;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 fallbackToBundleIcon:(char)a3;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3 fallbackToBundleIcon:(char)a4;
+ (id)imageForRouteAnnotationStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3 customIconID:(unsigned long long)a4;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3 customIconID:(unsigned long long)a4 fallbackToBundleIcon:(char)a5 transparent:(char)a6 interactive:(char)a7;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3 transparent:(char)a4;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(char *)a3 transparent:(char)a4 interactive:(char)a5;
+ (id)imageForTrafficCamera:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForTrafficCamera:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 nightMode:(char)a3;
+ (id)imageForTrafficIncidentType:(long long)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForTrafficIncidentType:(long long)a0 size:(unsigned long long)a1 forScale:(double)a2 nightMode:(char)a3;
+ (struct CGColor { } *)newFillColorForStyleAttributes:(id)a0 forScale:(double)a1;
+ (struct CGColor { } *)newGlyphColorForStyleAttributes:(id)a0 forScale:(double)a1;
+ (struct CGColor { } *)newHaloColorForStyleAttributes:(id)a0 forScale:(double)a1;
+ (void)requestImageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 completionHandler:(id /* block */)a3;
+ (void)requestImageForStyleAttributes:(id)a0 size:(unsigned long long)a1 scale:(double)a2 completionHandler:(id /* block */)a3;
+ (void)setDiskCacheURL:(id)a0;

@end
