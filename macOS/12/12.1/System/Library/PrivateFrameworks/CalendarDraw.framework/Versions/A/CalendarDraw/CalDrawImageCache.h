@interface CalDrawImageCache : NSObject

+ (void)_setup;
+ (id)imageWithColor:(id)a0 forKey:(id)a1 inCategory:(id)a2;
+ (void)cacheImage:(id)a0 withColor:(id)a1 forKey:(id)a2 inCategory:(id)a3;
+ (void)purgeColor:(id)a0;
+ (void)purgeCategory:(id)a0;
+ (id)eventTileCategory;
+ (id)eventIconCategory;
+ (id)dotCategoryForSize:(double)a0;
+ (id)dotOccurrenceBorderCategoryForSize:(double)a0;
+ (id)normalCheckboxCategory;
+ (id)swatchCategoryForLargeSize:(BOOL)a0;

@end
