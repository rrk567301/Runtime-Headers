@class NSString, NSMutableDictionary;

@interface KHConfiguration : KHModel <KHJSONGeneratorProtocol> {
    long long _categoryId;
    long long _productId;
    NSString *_name;
    NSMutableDictionary *_treatments;
    NSMutableDictionary *_assetCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double backingScaleFactor;

+ (id)configurationForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)configurationIdsForCategory:(long long)a0 fromDatabase:(id)a1;
+ (id)generateModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (id)modifyModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;

- (void)dealloc;
- (id)name;
- (void)setName:(id)a0;
- (void)remove;
- (long long)productId;
- (void)setProductId:(long long)a0;
- (long long)categoryId;
- (id)uniqueName;
- (void)setCategoryId:(long long)a0;
- (id)JSONRepresentation;
- (BOOL)isSimilarToModel:(id)a0 skippingFields:(id)a1 differences:(id *)a2;
- (void)cacheName:(id)a0;
- (void)cacheCategoryId:(long long)a0;
- (void)cacheProductId:(long long)a0;
- (id)supportedTreatmentsForLayout:(id)a0 withTheme:(id)a1;
- (Class)configurationTreatmentClass;
- (BOOL)isPaletteGenerated;
- (id)supportedTreatmentsForContentEntityClass:(id)a0 withCaption:(BOOL)a1;
- (id)thumbnailAsset;
- (id)defaultTextStyleForFrame:(id)a0;
- (id)supportedTextColors;
- (id)configurationTreatmentsForType:(unsigned long long)a0;
- (id)supportedTreatmentsForFrame:(id)a0 withCaption:(BOOL)a1;
- (id)thumbnailWithOffset:(struct CGPoint { double x0; double x1; })a0;

@end
