@class NSBundle, NSString, NSURL, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    BOOL _hasSetLocalizationDictionary;
}

- (id)localizedModelStringForKey:(id)a0;
- (id)localizedEntityNameForEntity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_cachedObjectForKey:(id)a0 value:(void *)a1;
- (void)setLocalizationDictionary:(id)a0;
- (id)initWithURL:(id)a0;
- (id)localizationDictionary;
- (id)localizedPropertyNameForProperty:(id)a0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (void)dealloc;

@end
