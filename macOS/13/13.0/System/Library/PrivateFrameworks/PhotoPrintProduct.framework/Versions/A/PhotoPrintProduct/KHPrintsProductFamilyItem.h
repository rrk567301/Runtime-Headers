@interface KHPrintsProductFamilyItem : KHProductFamilyItem

@property (nonatomic) unsigned long long productFamily;

+ (id)itemWithPrintsProductFamily:(unsigned long long)a0;
+ (id)allProductFamilyItems;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })horizontalDimensionRangeForPrintsProductFamily:(unsigned long long)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })verticalDimensionRangeForPrintsProductFamily:(unsigned long long)a0;
+ (id)keyForPrintsProductFamily:(unsigned long long)a0 suffix:(id)a1;
+ (id)titleForPrintsProductFamily:(unsigned long long)a0;
+ (id)subtitleForPrintsProductFamily:(unsigned long long)a0 countryCode:(id)a1;
+ (id)imageForPrintsProductFamily:(unsigned long long)a0 suffix:(id)a1;

- (id)productSubgroups;
- (id)portraitImage;
- (id)landscapeImage;
- (id)universalImage;
- (id)subTitleForCountryCode:(id)a0;

@end
