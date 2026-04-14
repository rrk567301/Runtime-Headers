@class NSString, NSSet, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKVLocalization : NSObject <NSSecureCoding> {
    NSString *_siriLanguageCode;
    NSSet *_dictationLanguageCodes;
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetResolved;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultLocalization;
+ (id)supportedNSLocaleFromLanguageCode:(id)a0;
+ (long long)supportedLocaleFromLanguageCode:(id)a0;
+ (id)supportedLanguageCodeFromLocale:(id)a0;
+ (id)languageDesignatorFromLanguageCode:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (id)siriLanguageCode;
- (id)initWithSiriLanguageCode:(id)a0;
- (BOOL)isEqualToLocalization:(id)a0;
- (id)dictationLanguageCodes;
- (id)allLanguageCodes;
- (long long)locateMorphunAssetForSiriLanguage:(id *)a0;
- (BOOL)_locateMorphunAssetForLocale:(id)a0 outAssetPath:(id *)a1;

@end
