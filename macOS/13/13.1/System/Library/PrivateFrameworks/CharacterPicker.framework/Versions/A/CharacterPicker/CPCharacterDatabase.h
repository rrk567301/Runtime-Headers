@class NSDictionary;

@interface CPCharacterDatabase : NSObject {
    struct sqlite3 { } *_charDatabase;
    struct sqlite3 { } *_relatedCharDatabase;
    NSDictionary *_languageInfo;
}

+ (id)sharedDatabase;

- (void)dealloc;
- (id)init;
- (id)createXPCArrayForSearchString:(id)a0 maxCount:(long long)a1;
- (id)createXPCArrayForRelatedCharacters:(id)a0 maxCount:(long long)a1;
- (id)searchCharacterInfo:(id)a0;
- (id)createXPCDictionaryForCharacterInfo:(id)a0;
- (id)languageForFieldTag:(id)a0;
- (id)tagsForLanguage:(id)a0;
- (struct sqlite3 { } *)_openDatabase:(id)a0;
- (id)_hanLanguageInfo;

@end
