@interface SOSRLanguageItem : SOSpeechItem

+ (id)availableLocalRecognizerLanguageItems;
+ (unsigned long long)bestIndexFromLanguageItems:(id)a0 forLocaleIdentifier:(id)a1;
+ (id)languageItemsFromLocaleIdentifiers:(id)a0 usingOffline:(char)a1;
+ (void)setVisibilityValue:(unsigned long long)a0 forLocaleIdentifier:(id)a1 usingOffline:(char)a2;
+ (id)tagNameFromLocaleIdentifier:(id)a0;
+ (id)visibleSRLanguageItemsTableUsingOffline:(char)a0;
+ (id)downloadableLocalSRLanguageItems;
+ (id)engineIdentifierFromLocaleIdentifier:(id)a0;
+ (id)languageItemFromLanguageItems:(id)a0 matchingLocaleIdentifier:(id)a1;
+ (id)languageItemsFromLocaleIdentifiers:(id)a0;
+ (id)preferredDictationLocaleIdentifierFromAvaiableLocaleIdentifiers:(id)a0 defaultLocaleIdentifier:(id)a1;
+ (void)setVisibleSRLanguageItemsTable:(id)a0 usingOffline:(char)a1;
+ (unsigned long long)visibiltyValueForLocaleIdentifier:(id)a0 entryExists:(char *)a1 usingOffline:(char)a2;

- (void)dealloc;
- (id)description;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0 usingOffline:(char)a1;
- (id)initWithDownloadableBundleIdentifier:(id)a0 properties:(id)a1;

@end
