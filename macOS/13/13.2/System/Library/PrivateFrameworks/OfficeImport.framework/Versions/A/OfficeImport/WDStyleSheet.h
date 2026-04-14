@class WDDocument, NSMutableDictionary, WDCharacterProperties, WDParagraphProperties, WDStyle, NSMutableArray;

@interface WDStyleSheet : NSObject {
    NSMutableDictionary *mStyleDictionary;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}

@property (readonly, weak) WDDocument *document;

- (id)description;
- (void).cxx_destruct;
- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)a0;
- (id)styles;
- (id)initWithDocument:(id)a0;
- (id)defaultTableStyle;
- (unsigned long long)styleCount;
- (id)styleWithId:(id)a0;
- (id)styleWithName:(id)a0;
- (id)paragraphStyleWithStartingName:(id)a0;
- (id)createStyleWithId:(id)a0 type:(int)a1;
- (id)createStyleWithName:(id)a0 type:(int)a1;
- (void)addStyle:(id)a0 name:(id)a1;
- (void)setName:(id)a0 forId:(id)a1;
- (void)removeStyleWithId:(id)a0;
- (id)defaultCharacterProperties;
- (id)defaultParagraphProperties;
- (void)createDefaultStyles;
- (id)defaultCharacterStyle;
- (void)setDefaultCharacterStyle:(id)a0;
- (void)setDefaultTableStyle:(id)a0;
- (id)defaultListStyle;
- (void)setDefaultListStyle:(id)a0;
- (id)styleIdForName:(id)a0;
- (id)styleNameToUniqueId:(id)a0;
- (id)styleIdToName:(id)a0;
- (id)allAliasesForStyleId:(id)a0 name:(id)a1;
- (void)initializeDefaultProperties;

@end
