@interface SiriSharedUIUtilities : NSObject

+ (id)filterTranscriptItemsForRFPluginContent:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0;
+ (id)_emojisToNotInclude;
+ (BOOL)applicationBundleIdentifierIsThirdParty:(id)a0;
+ (BOOL)emojiIsValid:(struct __EmojiTokenWrapper { } *)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0 isAttending:(BOOL)a1;
+ (id)substringRangesContainingEmojiInString:(id)a0;

@end
