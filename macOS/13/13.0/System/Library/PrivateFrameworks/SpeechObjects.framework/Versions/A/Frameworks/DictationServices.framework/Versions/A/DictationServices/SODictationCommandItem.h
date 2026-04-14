@class NSArray, NSString, NSMutableDictionary;

@interface SODictationCommandItem : SODictationCommandGroup {
    NSMutableDictionary *_customDictionary;
}

@property (retain, nonatomic) NSArray *searchAlternates;
@property (retain, nonatomic) NSString *customScope;
@property (retain, nonatomic) NSString *customAppName;
@property (retain, nonatomic) NSString *customType;
@property (retain, nonatomic) NSArray *customAuxTypes;
@property (retain, nonatomic) NSArray *customFileNames;
@property (retain, nonatomic) NSArray *customURLs;
@property (retain, nonatomic) NSArray *customPasteBoard;
@property (retain, nonatomic) NSArray *customPasteText;
@property (retain, nonatomic) NSArray *customURLStrings;
@property (retain, nonatomic) NSArray *customMenuStrings;
@property (retain, nonatomic) NSString *customShortcutsWorkflow;
@property (nonatomic) unsigned long long customShortcutKeyCode;
@property (nonatomic) unsigned long long customShortcutModifierFlags;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *untranslatedDisplayString;
@property (retain, nonatomic) NSString *untranslatedLocale;
@property (retain, nonatomic) id commandInfo;
@property (nonatomic) BOOL isEdited;
@property (nonatomic) BOOL isRemoved;
@property (nonatomic) BOOL isCollapsed;

+ (id)newFileCommandItemWithLocal:(id)a0;
+ (id)newCommandItemWithLocal:(id)a0 scope:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isGroup;
- (BOOL)isVisible;
- (id)displayString;
- (void)setDisplayString:(id)a0;
- (void)setIsEnabled:(BOOL)a0;
- (void)removeFromPreferences;
- (void)saveToPreferences;
- (id)cloneWithoutCommands;
- (id)commandsArray;
- (id)initWithIdentifier:(id)a0 properties:(id)a1 locale:(id)a2;
- (BOOL)conflictsWithItem:(id)a0;
- (BOOL)evaluateCommandPredicate:(id)a0;
- (void)setCustomFileName:(id)a0;
- (void)setCustomURL:(id)a0;
- (void)_setCustomCommandStrings:(id)a0 withLocale:(id)a1;
- (id)_customCommandStringsWithLocale:(id)a0;
- (id)primaryBuiltinCommandForLocale:(id)a0;
- (void)_updateBuiltInCommandsWithLocale:(id)a0;
- (void)_reloadFromProperties:(id)a0;
- (BOOL)_isNashvilleLocale:(id)a0;
- (void)refreshDataFromPreferences;
- (void)_saveKey:(id)a0 toDictionary:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 locale:(id)a2;
- (id)valueForKey:(id)a0 locale:(id)a1;
- (id)untranslatedDisplayStringAndLocale:(id *)a0;
- (id)sortString;

@end
