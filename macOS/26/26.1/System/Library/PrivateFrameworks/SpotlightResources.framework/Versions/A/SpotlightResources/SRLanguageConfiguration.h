@class NSDictionary;

@interface SRLanguageConfiguration : NSObject {
    NSDictionary *_supportedLanguageMap;
}

@property (nonatomic) BOOL hasTestAssets;

+ (id)configuration;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isSupportedLanguage:(id)a0 deliveryType:(id)a1;
- (void)loadSupportedLanguages:(id)a0;

@end
