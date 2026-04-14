@class NSString, NSSet, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SEMLocalization : NSObject <NSSecureCoding> {
    NSString *_siriLanguageCode;
    NSSet *_dictationLanguageCodes;
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetResolved;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)supportedLanguageCodeFromLocale:(id)a0;
+ (id)supportedNSLocaleFromLanguageCode:(id)a0;
+ (long long)supportedLocaleFromLanguageCode:(id)a0;
+ (id)defaultLocalization;

- (id)allLanguageCodes;
- (void)refresh;
- (id)dictationLanguageCodes;
- (id)initWithSiriLanguageCode:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)siriLanguageCode;
- (void).cxx_destruct;
- (BOOL)isEqualToLocalization:(id)a0;
- (id)init;
- (BOOL)_locateMorphunAssetForLocale:(id)a0 outAssetPath:(id *)a1 error:(id *)a2;
- (long long)locateMorphunAssetForSiriLanguage:(id *)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;

@end
