@class NSString, NSFindPatternAttachmentCell;
@protocol NSFindPatternManager;

@interface NSFindPatternTextField : NSTextFinderBarTextField <NSFindPatternField> {
    NSFindPatternAttachmentCell *selectedAttachment;
}

@property id<NSFindPatternManager> findPatternManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStringValue:(id)a0;
- (id)regularExpression;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textDidChange:(id)a0;
- (id)_fieldEditor;
- (void)textView:(id)a0 clickedOnCell:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atIndex:(unsigned long long)a3;
- (void)textView:(id)a0 doubleClickedOnCell:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atIndex:(unsigned long long)a3;
- (id)textView:(id)a0 shouldChangeTypingAttributes:(id)a1 toAttributes:(id)a2;
- (void)_insertFindPattern:(id)a0;
- (BOOL)removeFindPattern:(id)a0;
- (void)insertNewFindPattern:(id)a0;
- (void)setFindPatternArray:(id)a0;
- (id)findPatternArray;
- (id)replacementExpression;
- (BOOL)hasFindPattern;
- (id)findPatternPropertyList;
- (void)setFindPatternPropertyList:(id)a0;
- (id)plainTextValue;
- (id)menuForFindPatternAttachment:(id)a0;
- (id)findField;
- (id)replaceField;
- (BOOL)_isFindField;
- (BOOL)_eventIsInsertPatternKeyEquivalent:(id)a0;
- (id)_findPatternAttachmentForFindPattern:(id)a0;
- (void)_insertFindPatternAttachment:(id)a0;
- (void)_invalidateLayout;
- (void)_updateReplacePatternsWithNewPatterns:(id)a0;
- (void)_updateFindPatternsWithNewPatterns:(id)a0;
- (void)_uniqueFindPatternsInAttributedStringAttachments:(id)a0;
- (id)_rangesOfFindPattern:(id)a0;
- (id)_uniquePatterns;
- (void)_selectedFindPattern:(id)a0;

@end
