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

+ (id)supportedNSLocaleFromLanguageCode:(id)a0;
+ (id)supportedLanguageCodeFromLocale:(id)a0;
+ (id)defaultLocalization;
+ (long long)supportedLocaleFromLanguageCode:(id)a0;

- (BOOL)_locateMorphunAssetForLocale:(id)a0 outAssetPath:(id *)a1 error:(id *)a2;
- (void)refresh;
- (long long)locateMorphunAssetForSiriLanguage:(id *)a0 error:(id *)a1;
- (id)initWithSiriLanguageCode:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToLocalization:(id)a0;
- (id)init;
- (id)dictationLanguageCodes;
- (id)initWithCoder:(id)a0;
- (id)siriLanguageCode;
- (id)allLanguageCodes;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
