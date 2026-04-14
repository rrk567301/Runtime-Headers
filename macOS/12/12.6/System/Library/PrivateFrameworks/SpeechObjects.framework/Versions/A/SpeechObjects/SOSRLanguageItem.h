@interface SOSRLanguageItem : SOSpeechItem

+ (id)visibleSRLanguageItemsTableUsingOffline:(BOOL)a0;
+ (id)availableLocalRecognizerLanguageItems;
+ (id)languageItemsFromLocaleIdentifiers:(id)a0 usingOffline:(BOOL)a1;
+ (unsigned long long)bestIndexFromLanguageItems:(id)a0 forLocaleIdentifier:(id)a1;
+ (id)tagNameFromLocaleIdentifier:(id)a0;
+ (unsigned long long)visibiltyValueForLocaleIdentifier:(id)a0 entryExists:(BOOL *)a1 usingOffline:(BOOL)a2;
+ (void)setVisibilityValue:(unsigned long long)a0 forLocaleIdentifier:(id)a1 usingOffline:(BOOL)a2;
+ (id)downloadableLocalSRLanguageItems;
+ (void)setVisibleSRLanguageItemsTable:(id)a0 usingOffline:(BOOL)a1;
+ (id)engineIdentifierFromLocaleIdentifier:(id)a0;
+ (id)languageItemsFromLocaleIdentifiers:(id)a0;
+ (id)languageItemFromLanguageItems:(id)a0 matchingLocaleIdentifier:(id)a1;
+ (id)preferredDictationLocaleIdentifierFromAvaiableLocaleIdentifiers:(id)a0 defaultLocaleIdentifier:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0 usingOffline:(BOOL)a1;
- (id)initWithDownloadableBundleIdentifier:(id)a0 properties:(id)a1;

@end
