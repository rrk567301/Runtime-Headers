@interface SiriUIPreferences : NSObject

+ (id)sharedPreferences;

- (void)setLanguageCode:(id)a0;
- (char)shouldSkipBuddy;
- (char)suitableMicrophoneExists;
- (void)setupAssistantSetSiriEnabled:(char)a0;

@end
