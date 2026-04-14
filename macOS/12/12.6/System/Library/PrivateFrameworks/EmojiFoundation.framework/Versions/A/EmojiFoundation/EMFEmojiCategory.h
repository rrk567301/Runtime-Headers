@class NSString;

@interface EMFEmojiCategory : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *shortLocalizedName;

+ (BOOL)_isCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_supportsCoupleSkinToneSelection:(id)a0;
+ (id)_emojiSetForIdentifier:(id)a0;
+ (id)categoryIdentifierList;
+ (id)categoryWithIdentifier:(id)a0;
+ (id)PrepopulatedEmoji;
+ (id)PeopleEmoji;
+ (id)NatureEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)ActivityEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)ObjectsEmoji;
+ (id)SymbolsEmoji;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)extraFlagsForCountryCode:(id)a0;
+ (id)flagEmojiCountryCodesCommon;
+ (id)stringToRegionalIndicatorString:(id)a0;
+ (id)insertionFlagsForCountryCodes:(id)a0 inSortedCountryCodes:(id)a1;
+ (void)insertToSortedCountries:(id)a0 withAdditionalFlags:(id)a1;
+ (id)FlagsEmoji;
+ (id)_baseLocalizationKeyForIdentifier:(id)a0;
+ (id)DingbatsVariantEmoji;
+ (id)NoneVariantEmoji;
+ (id)SkinToneEmoji;
+ (id)GenderEmoji;
+ (id)ProfessionEmoji;
+ (BOOL)_isHandholdingCoupleEmoji:(id)a0;
+ (id)CoupleMultiSkinToneEmoji;
+ (id)ExtendedCoupleMultiSkinToneEmoji;
+ (BOOL)_isBaseHandshakeOrHandshakeWithSkintonesEmoji:(id)a0;
+ (id)MultiPersonFamilySkinToneEmoji;
+ (id)localizedRecentsDescription;
+ (id)localizedSkinToneEmojiDescription;
+ (BOOL)_isDingbatsVariantEmoji:(id)a0;
+ (BOOL)_isNoneVariantEmoji:(id)a0;
+ (BOOL)_isSkinToneEmoji:(id)a0;
+ (BOOL)_isGenderEmoji:(id)a0;
+ (BOOL)_isProfessionEmoji:(id)a0;
+ (BOOL)_isFlagEmoji:(id)a0;
+ (BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_isMultiPersonFamilySkinToneEmoji:(id)a0;
+ (id)ProfessionWithoutSkinToneEmoji;
+ (id)NewlyAddedEmoji;
+ (id)CelebrationEmoji;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)emojiTokensForLocaleData:(id)a0;

@end
