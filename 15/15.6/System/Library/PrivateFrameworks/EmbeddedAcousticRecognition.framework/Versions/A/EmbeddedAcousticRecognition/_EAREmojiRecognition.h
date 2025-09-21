@class EMFEmojiPreferencesClient, EMFEmojiLocaleData, NSArray;

@interface _EAREmojiRecognition : NSObject {
    EMFEmojiPreferencesClient *_preferences;
    EMFEmojiLocaleData *_localeData;
    NSArray *_frequentEmojis;
    struct __EmojiLocaleDataWrapper { } *_cemlocaleRef;
}

@property (readonly, nonatomic) char isEmojiPersonalizationUsed;
@property (readonly, nonatomic) char isEmojiDisambiguationUsed;
@property (readonly, nonatomic) char isLocaleRTL;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (void)didUseEmoji:(id)a0 replacementContext:(id)a1;
- (id)baseStringForEmojiString:(id)a0;
- (id)formatEmojiStrings:(id)a0;
- (id)formatEmojiStrings:(id)a0 isLogging:(char)a1;
- (char)isEmojiRecognitionCapable;
- (char)isValidEmoji:(id)a0;
- (void)recognizeEmojisInInputString:(id)a0 enumerateUsingBlock:(id /* block */)a1;
- (void)resetEmojiMetrics;
- (void)resetEmojiPreferences;
- (id)searchEmojiAlternativesForSpokenEmoji:(id)a0 count:(long long)a1 emojiCharacter:(id)a2;

@end
