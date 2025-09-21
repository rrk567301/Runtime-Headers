@class NSString;

@interface SCROutputUserSubstitution : NSObject <NSCopying> {
    NSString *_searchText;
    NSString *_substitutionText;
    NSString *_macinTalkPhonemes;
    NSString *_editorMode;
    NSString *_domainIdentifier;
    NSString *_componentName;
    char _isEnabled;
    char _ignoreCase;
    char _isSearchTextAllPunctuation;
    char _isSearchSurroundedByPunctuation;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)enabled;
- (void).cxx_destruct;
- (id)domainIdentifier;
- (void)setEnabled:(char)a0;
- (id)componentName;
- (void)setComponentName:(id)a0;
- (void)setDomainIdentifier:(id)a0;
- (id)searchText;
- (void)setSearchText:(id)a0;
- (char)ignoreCase;
- (void)setIgnoreCase:(char)a0;
- (char)isSearchSurroundedByPunctuation;
- (void)_finalizeInitialization;
- (id)createStorageDictionary;
- (id)editorMode;
- (id)initWithSearchText:(id)a0 substitutionTextKey:(id)a1 substitutionText:(id)a2 macinTalkPhonemes:(id)a3 editorMode:(id)a4 domainIdentifier:(id)a5 componentName:(id)a6;
- (id)initWithStorageDictionary:(id)a0;
- (char)isSearchTextAllPunctuation;
- (id)macinTalkPhonemes;
- (void)setEditorMode:(id)a0;
- (void)setMacinTalkPhonemes:(id)a0;
- (void)setSubstitutionText:(id)a0;
- (id)substitutionText;

@end
