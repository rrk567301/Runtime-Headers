@class NSString, NSDictionary;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long quality;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long voiceTraits;
@property (readonly, nonatomic) NSDictionary *audioFileSettings;

+ (void)initialize;
+ (id)speechVoices;
+ (id)currentLanguageCode;
+ (id)voiceWithIdentifier:(id)a0;
+ (id)voiceWithLanguage:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
