@interface SiriSharedUIUtilities : NSObject

+ (id)filterTranscriptItemsForSAEDialogBoxContent:(id)a0;
+ (char)utteranceViewEligibleForLightEffects:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0;
+ (id)_emojisToNotInclude;
+ (id)_ineligibleDialogCategoriesForLightEffects;
+ (char)applicationBundleIdentifierIsThirdParty:(id)a0;
+ (id)cardFromSnippet:(id)a0;
+ (char)contentDiffersBetweenItems:(id)a0 andItems:(id)a1;
+ (char)emojiIsValid:(struct __EmojiTokenWrapper { } *)a0;
+ (id)filterTranscriptItemsForRFPluginContent:(id)a0;
+ (id)getAceObjectForSACardSnippetFromTranscriptItems:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0 isAttending:(char)a1;
+ (char)reportConcernButtonEnabled;
+ (id)substringRangesContainingEmojiInString:(id)a0;

@end
