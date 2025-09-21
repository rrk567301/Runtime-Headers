@class NSArray, NSNumber, AXVoiceOverVoiceRotorItem;

@interface SCRSpeechSettings : NSObject {
    unsigned char _cachedIsMigrated;
}

@property (retain, nonatomic) AXVoiceOverVoiceRotorItem *currentVoiceRotor;
@property (retain, nonatomic) NSArray *voiceRotors;
@property (nonatomic) char languageDetectionEnabled;
@property (retain, nonatomic) NSNumber *rotorRate;
@property (retain, nonatomic) NSNumber *rotorPitch;
@property (retain, nonatomic) NSNumber *rotorVolume;

+ (id)sharedInstance;

- (id)init;
- (id)systemLanguageID;
- (id)voiceOverDefaultVoiceSelections;
- (id)systemLanguageIDInVoiceSettings;
- (char)isMigrated;
- (id)percentToDouble:(id)a0;
- (void)resetSpeechSettings;
- (void)setDefaultVoiceSelection:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3;
- (id)voiceOverDefaultVoiceSelections:(id)a0;
- (id)voiceRotorItem:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3;
- (id)voiceSelection:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3;
- (id)voiceSelectionForLanguage:(id)a0;
- (id)voiceSelectionForVoiceIdentifier:(id)a0;

@end
