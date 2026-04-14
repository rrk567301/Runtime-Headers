@class NSDictionary, NSArray, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *voiceConfig;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *resourceList;
@property (copy, nonatomic) NSURL *searchPathURL;

+ (id)legacyPlatforms;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)defaultVoice;
- (void)syncWithConfigFile:(id)a0 voiceType:(long long)a1;
- (void)syncWithConfigData:(id)a0 voiceType:(long long)a1;
- (id)defaultTypeString;
- (id)defaultFootprintString;

@end
