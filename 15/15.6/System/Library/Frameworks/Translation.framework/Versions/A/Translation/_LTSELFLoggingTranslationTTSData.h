@interface _LTSELFLoggingTranslationTTSData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long sourceOrTargetLanguage;
@property (nonatomic) char isAutoplayTranslation;
@property (nonatomic) long long audioChannel;
@property (nonatomic) long long playbackSpeed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceOrTargetLanguage:(long long)a0 isAutoplayTranslation:(char)a1 ttsPlaybackSpeed:(long long)a2 audioChannel:(long long)a3;

@end
