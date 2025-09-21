@class NSString;

@interface KHTextStyleLocalization : KHModel {
    long long _styleId;
    NSString *_languageCode;
    NSString *_font;
    long long _fontSize;
    double _leading;
    double _lineSpacing;
    double _kerning;
    long long _productID;
}

+ (id)modelWithDictionary:(id)a0;
+ (id)modelWithDictionary:(id)a0 inDatabase:(id)a1;
+ (id)localizationForTextStyle:(long long)a0 language:(id)a1 fromDatabase:(id)a2;
+ (id)modelWithLocalizationString:(id)a0;
+ (id)modelWithLocalizationString:(id)a0 inDatabase:(id)a1;

- (long long)productID;
- (void)setLanguageCode:(id)a0;
- (id)font;
- (void)dealloc;
- (long long)fontSize;
- (void)setFontSize:(long long)a0;
- (id)stringValue;
- (void)setFont:(id)a0;
- (id)languageCode;
- (double)lineSpacing;
- (void)setKerning:(double)a0;
- (void)setLineSpacing:(double)a0;
- (double)leading;
- (void)setProductID:(long long)a0;
- (double)kerning;
- (long long)styleId;
- (void)setStyleId:(long long)a0;
- (void)setLeading:(double)a0;
- (void)cacheProductID:(long long)a0;
- (void)applyDictionaryProperties:(id)a0;
- (void)applyLocalizationString:(id)a0;
- (void)cacheFont:(id)a0;
- (void)cacheFontSize:(long long)a0;
- (void)cacheKerning:(double)a0;
- (void)cacheLanguageCode:(id)a0;
- (void)cacheLeading:(double)a0;
- (void)cacheLineSpacing:(double)a0;
- (void)cacheStyleId:(long long)a0;

@end
