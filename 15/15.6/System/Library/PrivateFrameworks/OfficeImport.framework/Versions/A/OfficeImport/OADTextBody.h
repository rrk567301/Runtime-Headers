@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)properties;
- (void)setProperties:(id)a0;
- (id)paragraphAtIndex:(unsigned long long)a0;
- (unsigned long long)paragraphCount;
- (id)plainText;
- (id)addParagraph;
- (void)addParagraphsFromTextBody:(id)a0;
- (void)applyTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0 ownTextListStyle:(char)a1;
- (id)findFirstTextRunOfClass:(Class)a0;
- (id)firstParagraphEffects;
- (void)flattenProperties;
- (char)isSimilarToTextBody:(id)a0;
- (unsigned long long)newLineCount;
- (unsigned long long)nonEmptyParagraphCount;
- (id)overrideTextListStyle;
- (char)propagateActualTextStyleToTextListStyle;
- (void)removeAllParagraphs;
- (void)removeLastParagraphIfEmpty;
- (void)removeLeadingNewlines;
- (void)removeTrailingNewlines;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (id)textListStyle;

@end
