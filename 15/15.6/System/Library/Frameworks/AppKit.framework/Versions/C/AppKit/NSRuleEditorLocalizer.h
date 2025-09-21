@class NSDictionary, NSMutableArray;

@interface NSRuleEditorLocalizer : NSObject {
    NSMutableArray *_default;
    NSMutableArray *_localized;
    NSDictionary *_dictionary;
    id _ruleEditorLocalizerReserved;
}

- (void)dealloc;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (id)_constructTitleMappingDictionariesFromOptionDictionaries:(id)a0 localizationItemIndex:(unsigned long long *)a1;
- (id)_extractOrderedNonStaticItemsFromArray:(id)a0;
- (id)_localizedItemForDefaultItemAtLayoutIndex:(unsigned long long)a0 inDefaultItemsAtIndex:(long long)a1;
- (char)_parseHalf:(id)a0 intoArray:(id)a1 isValue:(char)a2 ignoringSeparators:(char)a3 errorDescription:(id *)a4;
- (char)_parseKey:(id)a0 value:(id)a1 errorDescription:(id *)a2;
- (char)_tokenizeString:(id)a0 intoArray:(id)a1 ignoringSeparators:(char)a2 errorDescription:(id *)a3;
- (id)localizeOptionDictionaries:(id)a0;

@end
