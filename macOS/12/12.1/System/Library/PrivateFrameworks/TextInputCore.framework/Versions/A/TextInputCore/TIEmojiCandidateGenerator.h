@class NSArray, TIInputMode;

@interface TIEmojiCandidateGenerator : NSObject {
    void *m_emojiGeneratorPrimaryLanguage;
    void *m_emojiGeneratorSecondaryLanguage;
    BOOL m_didAttemptPrimaryEmojiGeneratorLoad;
    BOOL m_didAttemptSecondaryEmojiGeneratorLoad;
    BOOL m_shouldShowEmojis;
    struct __EmojiLocaleDataWrapper { } *m_emojiDataForPrimaryLocale;
    struct __EmojiLocaleDataWrapper { } *m_emojiDataForSecondaryLocale;
    BOOL m_didAttemptPrimaryLocaleForEmojiLoad;
    BOOL m_didAttemptSecondaryLocaleForEmojiLoad;
    BOOL m_isEmojiInputModeEnabled;
}

@property (readonly, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) NSArray *activeInputModes;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithActiveInputModes:(id)a0;
- (void)updateEmojiLocale;
- (void)updateEmojiAdornmentGenerators;
- (id)createAndAddEmojiTokensFrom:(struct __CFArray { } *)a0 inArray:(id)a1 forInputString:(id)a2;
- (id)enumerateForEmojiCandidatesIn:(id)a0 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1 asReplacementCandidate:(BOOL)a2;
- (id)randomShuffle:(id)a0;
- (id)extractTokensForEmojiComputation:(id)a0;
- (id)getSkinToneSensitiveEmojis:(id)a0;
- (id)skinToneModifiedAdornmentEmojis:(id)a0 forLocale:(struct __EmojiLocaleDataWrapper { } *)a1 forInput:(id)a2;
- (id)emojiAppendCandidates:(id)a0;
- (id)emojiAdornmentCandidates:(id)a0;
- (id)generateEmojiAdornmentCandidates:(id)a0;
- (void)updateForActiveInputModes:(id)a0;
- (void)updateEmojiStatusForKeyboardState:(id)a0;
- (id)emojiReplacementCandidates:(id)a0;
- (id)emojiReplacementCandidatesForKeyboardState:(id)a0;
- (id)emojiReplacementCandidatesForText:(id)a0;
- (id)emojiAdornmentCandidatesForKeyboardState:(id)a0;
- (void)logEmojiUsageFromCandidateBar:(id)a0;

@end
