@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) BOOL overrideDefault;
@property (nonatomic) BOOL overrideFallbackDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDefault;
- (BOOL)isSystemVoice;
- (BOOL)excludeInAvailableVoiceList;
- (BOOL)isCombinedFootprint;
- (BOOL)isFallbackDefault;

@end
