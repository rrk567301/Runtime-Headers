@class NSDictionary, NSArray, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *voiceConfig;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *resourceList;
@property (copy, nonatomic) NSURL *searchPathURL;

+ (id)legacyPlatforms;

- (id)defaultFootprintString;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)syncWithConfigData:(id)a0 voiceType:(long long)a1;
- (void)syncWithConfigFile:(id)a0 voiceType:(long long)a1;
- (id)defaultVoice;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)defaultTypeString;

@end
