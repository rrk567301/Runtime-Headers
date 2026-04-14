@class NSString, KHTextStyleLocalization, NSLock;

@interface KHTextStyle : KHModel <KHJSONGeneratorProtocol> {
    NSString *_label;
    NSString *_conversionName;
    long long _smallTextStyleId;
    KHTextStyleLocalization *_localization;
    NSLock *_localizationLock;
    double _cachedSampleHeight;
    NSString *_sampleString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textStyleWithConversionName:(id)a0 fromDatabase:(id)a1;
+ (id)legacyTextStyleMap;
+ (id)modelWithDictionary:(id)a0 inDatabase:(id)a1;
+ (id)textStyleWithKey:(long long)a0 fromDatabase:(id)a1;
+ (id)smallTextStyleWithKey:(long long)a0 fromDatabase:(id)a1;
+ (id)generateModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (id)modifyModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (void)generatePreferredFontsListWithArray:(id)a0 forBundleLocation:(id)a1;

- (void)dealloc;
- (id)init;
- (id)label;
- (void)setLabel:(id)a0;
- (double)lineSpacing;
- (void)setLineSpacing:(double)a0;
- (id)font;
- (void)setFont:(id)a0;
- (double)leading;
- (long long)fontSize;
- (void)setFontSize:(long long)a0;
- (id)localization;
- (id)uniqueName;
- (double)kerning;
- (void)setKerning:(double)a0;
- (void)setSampleString:(id)a0;
- (id)sampleString;
- (void)setLeading:(double)a0;
- (id)JSONRepresentation;
- (void)cacheLocalization:(id)a0;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (id)initWithModelId:(id)a0;
- (BOOL)isSimilarToModel:(id)a0 skippingFields:(id)a1 differences:(id *)a2;
- (void)cacheFont:(id)a0;
- (void)cacheFontSize:(long long)a0;
- (void)cacheLeading:(double)a0;
- (void)cacheKerning:(double)a0;
- (void)cacheLineSpacing:(double)a0;
- (id)conversionName;
- (long long)smallTextStyleId;
- (void)cacheLabel:(id)a0;
- (void)cacheConversionName:(id)a0;
- (void)cacheSmallTextStyleId:(long long)a0;
- (id)textStyleDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAttributedString:(id)a0 maxFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)calculateCachedSampleHeight;
- (void)setConversionName:(id)a0;
- (void)setSmallTextStyleId:(long long)a0;
- (double)sampledHeight;

@end
