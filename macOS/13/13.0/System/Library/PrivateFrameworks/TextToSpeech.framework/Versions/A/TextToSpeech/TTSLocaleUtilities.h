@class NSDictionary;

@interface TTSLocaleUtilities : NSObject

@property (retain, nonatomic) NSDictionary *generalLanguageCodeData;
@property (retain, nonatomic) NSDictionary *voiceIdSampleStringData;
@property (retain, nonatomic) NSDictionary *canonicalLanguageCodeVoiceNamesData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)defaultVoiceIdentifierForGeneralLanguageCode:(id)a0;
- (id)sampleStringForVoiceIdentifier:(id)a0;
- (id)defaultVoiceIdentifierForVoiceName:(id)a0;

@end
