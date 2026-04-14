@interface SiriUIPreferences : NSObject

+ (id)sharedPreferences;

- (void)setLanguageCode:(id)a0;
- (BOOL)suitableMicrophoneExists;
- (BOOL)shouldSkipBuddy;
- (void)setupAssistantSetSiriEnabled:(BOOL)a0;

@end
