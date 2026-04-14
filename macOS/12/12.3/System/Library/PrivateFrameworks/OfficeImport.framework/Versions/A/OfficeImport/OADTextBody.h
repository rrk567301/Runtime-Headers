@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)properties;
- (void)setProperties:(id)a0;
- (id)plainText;
- (id)addParagraph;
- (id)overrideTextListStyle;
- (id)textListStyle;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0 ownTextListStyle:(BOOL)a1;
- (void)flattenProperties;
- (unsigned long long)paragraphCount;
- (id)paragraphAtIndex:(unsigned long long)a0;
- (BOOL)propagateActualTextStyleToTextListStyle;
- (unsigned long long)nonEmptyParagraphCount;
- (void)removeAllParagraphs;
- (unsigned long long)newLineCount;
- (id)firstParagraphEffects;
- (void)applyTextListStyle:(id)a0;
- (void)removeTrailingNewlines;
- (void)removeLeadingNewlines;
- (void)removeLastParagraphIfEmpty;
- (BOOL)isSimilarToTextBody:(id)a0;
- (void)addParagraphsFromTextBody:(id)a0;
- (id)findFirstTextRunOfClass:(Class)a0;

@end
