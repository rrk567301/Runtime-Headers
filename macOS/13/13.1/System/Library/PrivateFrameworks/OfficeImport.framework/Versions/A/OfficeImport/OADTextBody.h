@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)properties;
- (void)setProperties:(id)a0;
- (id)plainText;
- (void)setParentTextListStyle:(id)a0;
- (void)flattenProperties;
- (unsigned long long)paragraphCount;
- (unsigned long long)nonEmptyParagraphCount;
- (id)paragraphAtIndex:(unsigned long long)a0;
- (id)addParagraph;
- (void)removeAllParagraphs;
- (unsigned long long)newLineCount;
- (id)firstParagraphEffects;
- (id)overrideTextListStyle;
- (void)applyTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0 ownTextListStyle:(BOOL)a1;
- (void)removeTrailingNewlines;
- (void)removeLeadingNewlines;
- (void)removeLastParagraphIfEmpty;
- (BOOL)propagateActualTextStyleToTextListStyle;
- (BOOL)isSimilarToTextBody:(id)a0;
- (void)removeUnnecessaryOverrides;
- (id)textListStyle;
- (void)addParagraphsFromTextBody:(id)a0;
- (id)findFirstTextRunOfClass:(Class)a0;

@end
