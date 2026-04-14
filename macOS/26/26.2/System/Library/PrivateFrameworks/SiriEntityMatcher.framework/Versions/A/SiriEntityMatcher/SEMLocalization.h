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

+ (id)defaultLocalization;
+ (id)supportedLanguageCodeFromLocale:(id)a0;
+ (id)supportedNSLocaleFromLanguageCode:(id)a0;
+ (long long)supportedLocaleFromLanguageCode:(id)a0;
+ (BOOL)hasOnDeviceAssetFor:(id)a0;
+ (id)nonSiriSupportedLocaleIdentifiers;

- (void)refresh;
- (id)initWithCoder:(id)a0;
- (BOOL)_locateMorphunAssetForLocale:(id)a0 outAssetPath:(id *)a1 error:(id *)a2;
- (BOOL)isEqual:(id)a0;
- (id)allLanguageCodes;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSiriLanguageCode:(id)a0;
- (long long)locateMorphunAssetForSiriLanguage:(id *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)siriLanguageCode;
- (BOOL)isEqualToLocalization:(id)a0;
- (id)dictationLanguageCodes;
- (id)init;

@end
