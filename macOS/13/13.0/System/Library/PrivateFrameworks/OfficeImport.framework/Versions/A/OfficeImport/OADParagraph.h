@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)properties;
- (unsigned long long)characterCount;
- (id)plainText;
- (void)setParentTextListStyle:(id)a0;
- (unsigned long long)textRunCount;
- (id)textRunAtIndex:(unsigned long long)a0;
- (void)removeAllTextRuns;
- (unsigned long long)lineBreakCount;
- (id)addTextLineBreak;
- (id)addRegularTextRun;
- (id)addGenericTextFieldWithGuid:(id)a0 type:(id)a1;
- (id)addDateTimeFieldWithFormat:(int)a0;
- (id)addFooterField;
- (id)paragraphEndCharacterProperties;
- (void)setParagraphEndCharacterProperties:(id)a0;
- (BOOL)hasBulletCharacterProperties;
- (id)bulletCharacterProperties;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)a0;
- (BOOL)isSimilarToParagraph:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)applyProperties:(id)a0;
- (void)removeUnnecessaryOverrides;
- (id)findFirstTextRunOfClass:(Class)a0;
- (id)addSlideNumberField;

@end
