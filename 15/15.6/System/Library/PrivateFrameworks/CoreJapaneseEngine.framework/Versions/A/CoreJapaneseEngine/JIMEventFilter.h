@class NSString, NSDictionary, NSArray, NSMutableDictionary;

@interface JIMEventFilter : NSObject {
    unsigned long long _eventContext;
    char _eventOnVerticalLayout;
    NSArray *_eventKeys;
    NSArray *_outCommandArray;
    NSString *_outCharacters;
    NSString *_outRawCharacters;
    NSDictionary *_keySetting;
    NSMutableDictionary *_overrideSetting;
    NSString *_incrementalSearchFilterKey;
    NSString *_predictionWindowFilterKey;
    unsigned long long _lastModifierFlags;
    NSMutableDictionary *_inputModeDictionaryCache;
    NSMutableDictionary *_inputMethodMenuCache;
    NSMutableDictionary *_menuShortcutTables;
    char _listeningPrefsChangedNotification;
}

@property (retain, nonatomic) NSString *settingFileName;
@property (retain) NSDictionary *commandDictionary;

+ (id)sharedEventFilter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)doCommandBySelector:(SEL)a0;
- (void)insertText:(id)a0;
- (void)_setPreferenceValue:(id)a0 forKey:(id)a1;
- (id)inputMethodMenuForKeyboardType:(unsigned long long)a0;
- (char)isCapsLockKeyOn;
- (unsigned short)_carbonModifiersFromCocoaModifiers:(unsigned long long)a0;
- (id)_commandInfoFromEventKey:(id)a0;
- (id)_commandNumbersFromString:(id)a0;
- (id)_currentContextName;
- (id)_keyStringsFromEvent:(id)a0 keyboardType:(unsigned long long)a1;
- (void)_overrideOutputSymbol:(id)a0 romanSymbol:(id)a1 forEventKey:(id)a2;
- (id)_possibleKeyCombinationsFromEvent:(id)a0 keyboardType:(unsigned long long)a1;
- (void)_preferencesDidChanged:(id)a0;
- (void)_prepareToListenPrefsChangedNotification;
- (id)_shortcutAndModifiers:(unsigned long long *)a0 forCommand:(id)a1 keyboardType:(unsigned long long)a2;
- (unsigned short)_unicharForKey:(unsigned short)a0 modifiers:(unsigned long long)a1 keyboardType:(unsigned long long)a2 keyboardLayout:(id)a3;
- (id)commandFromCommandString:(id)a0;
- (id)commandStringFromCommand:(id)a0;
- (id)initWithKeySettingPlistName:(id)a0;
- (id)inputModeDictionaryForKeyboardType:(unsigned long long)a0;
- (void)processEvent:(id)a0 inContext:(unsigned long long)a1 keyboardType:(unsigned long long)a2 ignoreCapslock:(char)a3 predictionShown:(char)a4 verticalLayout:(char)a5 incrementalSearchContext:(char)a6 eventHandler:(id /* block */)a7;

@end
