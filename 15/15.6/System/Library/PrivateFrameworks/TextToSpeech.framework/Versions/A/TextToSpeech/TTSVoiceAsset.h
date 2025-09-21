@class NSString, NSArray;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *languages;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) long long footprint;
@property (readonly, nonatomic) char neural;
@property (readonly, nonatomic) char isInstalled;
@property (nonatomic) char isDownloading;
@property (readonly, nonatomic) char isBuiltInVoice;
@property (retain, nonatomic) NSString *voicePath;
@property (nonatomic) long long voiceType;
@property (nonatomic) long long fileSize;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithName:(id)a0 languages:(id)a1 gender:(long long)a2 footprint:(long long)a3 isInstalled:(char)a4 isBuiltIn:(char)a5 masteredVersion:(id)a6 compatibilityVersion:(id)a7 neural:(char)a8;

@end
