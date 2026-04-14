@class NSString, NSArray, AVSpeechSynthesisProviderVoice;

@interface TTSAXResource : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ voice;
}

@property (nonatomic) BOOL canBeDownloaded;
@property (nonatomic, copy) NSString *contentPath;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isNoveltyVoice;
@property (nonatomic) BOOL isPersonalVoice;
@property (nonatomic) BOOL isSystemVoice;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *localizedNameWithFootprint;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic, retain) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *voiceId;
@property (nonatomic) long long voiceType;

+ (id)localizedName:(id)a0 forLanguage:(id)a1;

- (long long)assetSize;
- (id)primaryLanguage;
- (id)copyWithZone:(void *)a0;
- (id)nameAndFootprintForLanguage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (id)init;
- (id)speechVoice;
- (id)localizedNameForLanguage:(id)a0;

@end
