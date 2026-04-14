@class NSString;

@interface EMFEmojiCategory : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *shortLocalizedName;

+ (id)_emojiSetForIdentifier:(id)a0;
+ (BOOL)_supportsCoupleSkinToneSelection:(id)a0;
+ (id)categoryIdentifierList;
+ (id)categoryWithIdentifier:(id)a0;
+ (BOOL)_isCoupleMultiSkinToneEmoji:(id)a0;
+ (id)_baseLocalizationKeyForIdentifier:(id)a0;
+ (id)stringToRegionalIndicatorString:(id)a0;
+ (void)insertToSortedCountries:(id)a0 withAdditionalFlags:(id)a1;
+ (id)extraFlagsForCountryCode:(id)a0;
+ (id)insertionFlagsForCountryCodes:(id)a0 inSortedCountryCodes:(id)a1;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)localizedRecentsDescription;
+ (id)localizedSkinToneEmojiDescription;
+ (BOOL)_isDingbatsVariantEmoji:(id)a0;
+ (BOOL)_isNoneVariantEmoji:(id)a0;
+ (BOOL)_isSkinToneEmoji:(id)a0;
+ (BOOL)_isGenderEmoji:(id)a0;
+ (BOOL)_isProfessionEmoji:(id)a0;
+ (BOOL)_isFlagEmoji:(id)a0;
+ (BOOL)_isHandholdingCoupleEmoji:(id)a0;
+ (BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_isBaseHandshakeOrHandshakeWithSkintonesEmoji:(id)a0;
+ (BOOL)_isMultiPersonFamilySkinToneEmoji:(id)a0;
+ (id)DingbatsVariantEmoji;
+ (id)NoneVariantEmoji;
+ (id)SkinToneEmoji;
+ (id)GenderEmoji;
+ (id)ProfessionEmoji;
+ (id)ProfessionWithoutSkinToneEmoji;
+ (id)CoupleMultiSkinToneEmoji;
+ (id)ExtendedCoupleMultiSkinToneEmoji;
+ (id)MultiPersonFamilySkinToneEmoji;
+ (id)NewlyAddedEmoji;
+ (id)PrepopulatedEmoji;
+ (id)PeopleEmoji;
+ (id)NatureEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)CelebrationEmoji;
+ (id)ActivityEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)ObjectsEmoji;
+ (id)SymbolsEmoji;
+ (id)FlagsEmoji;
+ (id)flagEmojiCountryCodesCommon;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)emojiTokensForLocaleData:(id)a0;

@end
