@class NSString, NSDictionary, NSLocale;

@interface _WKWebExtensionLocalization : NSObject {
    NSString *_localeString;
    NSLocale *_locale;
}

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSDictionary *localizationDictionary;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)localizedStringForString:(id)a0;
- (id)_localizationDictionaryForWebExtension:(void *)a0 withLocale:(id)a1;
- (id)_localizedArrayForArray:(id)a0;
- (id)_predefinedMessages;
- (id)_stringByReplacingNamedPlaceholdersInString:(id)a0 withNamedPlaceholders:(id)a1;
- (id)_stringByReplacingPositionalPlaceholdersInString:(id)a0 withValues:(id)a1;
- (id)initWithLocalizedDictionary:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithRegionalLocalization:(id)a0 languageLocalization:(id)a1 defaultLocalization:(id)a2 withBestLocale:(id)a3 uniqueIdentifier:(id)a4;
- (id)initWithWebExtension:(void *)a0;
- (id)localizedDictionaryForDictionary:(id)a0;
- (id)localizedStringForKey:(id)a0 withPlaceholders:(id)a1;

@end
