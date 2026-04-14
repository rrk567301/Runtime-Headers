@interface EMFStringUtilities : NSObject

+ (id)_stringWithUnichar:(unsigned int)a0;
+ (BOOL)_hasSkinToneVariantsForString:(id)a0;
+ (id)_skinToneSpecifiersForString:(id)a0;
+ (id)_skinToneVariantsForString:(id)a0;
+ (id)professionSkinToneEmojiBaseKey:(id)a0;
+ (BOOL)_emojiString:(id)a0 containsSubstring:(id)a1;
+ (id)_baseFirstCharacterString:(id)a0;
+ (id)_baseStringForEmojiString:(id)a0;
+ (id)_coupleSkinToneChooserVariantsForString:(id)a0;
+ (id)_coupleStringWithLeftPerson:(id)a0 leftVariant:(id)a1 joiningString:(id)a2 rightPerson:(id)a3 rightVariant:(id)a4;
+ (unsigned int)_firstLongCharacterOfString:(id)a0;
+ (BOOL)_genderEmojiBaseStringNeedVariantSelector:(id)a0;
+ (id)_generateMultiPersonEmojiWithSkinTones:(id)a0 personBase:(id)a1 joiner:(id)a2 genderSuffix:(id)a3 suffix1:(id)a4 suffix2:(id)a5 containsSilhouette:(BOOL)a6;
+ (id)_joiningStringForCoupleString:(id)a0;
+ (id)_multiPersonStringForString:(id)a0 skinToneVariantSpecifier:(id)a1;
+ (id)_normalizeMultiPersonGroupToLongFormEncoding:(id)a0;
+ (id)_normalizeMultiPersonGroupToShortFormEncoding:(id)a0;
+ (id)_preferenceIndexString:(id)a0;
+ (id)_skinToneChooserArraysForCoupleType:(long long)a0 joiner:(id)a1;
+ (id)_skinToneChooserVariantsForHandHoldingCoupleType:(long long)a0;
+ (id)_skinToneChooserVariantsForMultiPersonEmoji:(long long)a0 skinToneVariants:(id)a1 joiner:(id)a2;
+ (id)_skinToneChooserVariantsForString:(id)a0;
+ (id)_skinToneChooserVariantsForString:(id)a0 usesSilhouetteSpecifiers:(BOOL)a1;
+ (int)_skinToneForString:(id)a0;
+ (int)_skinToneModifierFromSpecifierType:(id)a0;
+ (id)_skinToneSuffixFromSpecifierType:(id)a0;
+ (id)_skinToneVariantsForCouple:(long long)a0 joiner:(id)a1;
+ (id)_skinToneVariantsForMultiPersonEmoji:(id)a0 baseEmoji:(id)a1 personBase:(id)a2 joiner:(id)a3 genderSuffix:(id)a4;
+ (id)_skinToneVariantsForMultiPersonType:(long long)a0;
+ (id)_tokenizedHandshakeFromString:(id)a0;
+ (id)_tokenizedMultiPersonFromString:(id)a0;
+ (long long)multiPersonTypeForString:(id)a0;
+ (id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)a0;

@end
