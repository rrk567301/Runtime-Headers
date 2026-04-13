@class NSBundle, NSString, NSURL, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    BOOL _hasSetLocalizationDictionary;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)localizedEntityNameForEntity:(id)a0;
- (id)localizedPropertyNameForProperty:(id)a0;
- (id)localizedModelStringForKey:(id)a0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)localizationDictionary;
- (void)setLocalizationDictionary:(id)a0;
- (id)_cachedObjectForKey:(id)a0 value:(void *)a1;

@end
