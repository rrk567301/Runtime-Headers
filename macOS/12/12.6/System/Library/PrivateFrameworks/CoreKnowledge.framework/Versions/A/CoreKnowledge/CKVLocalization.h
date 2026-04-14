@class NSString, NSURL;

@interface CKVLocalization : NSObject <NSSecureCoding> {
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetIsEmbedded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *siriLanguageCode;

+ (id)defaultLocalization;
+ (id)supportedLanguageCodeFromLocale:(id)a0;
+ (id)assetPathForLocale:(id)a0;
+ (id)_languageCodeToLocaleIdentifierMap;
+ (id)supportedLocaleFromLanguageCode:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSiriLanguageCode:(id)a0;
- (BOOL)isSiriLanguageSupported;
- (BOOL)isEqualToLocalization:(id)a0;
- (id)_resolveAssetPathForSiriLanguage;
- (BOOL)refreshSiriLanguage;
- (id)assetPathForSiriLanguage:(BOOL *)a0;

@end
