@interface CalDrawImageCache : NSObject

+ (void)_setup;
+ (void)cacheImage:(id)a0 withColor:(id)a1 forKey:(id)a2 inCategory:(id)a3;
+ (id)dotCategoryForSize:(double)a0;
+ (id)dotOccurrenceBorderCategoryForSize:(double)a0;
+ (id)eventIconCategory;
+ (id)eventTileCategory;
+ (id)imageWithColor:(id)a0 forKey:(id)a1 inCategory:(id)a2;
+ (id)normalCheckboxCategory;
+ (void)purgeCategory:(id)a0;
+ (void)purgeColor:(id)a0;
+ (id)swatchCategoryForLargeSize:(BOOL)a0;

@end
