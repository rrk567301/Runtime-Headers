@class NSArray, NSDictionary, NSTextList, NSAttributedString;

@interface NSTextListElement : NSTextParagraph {
    long long _indentLevel;
    long long _itemNumber;
}

@property (weak) NSTextListElement *parentElement;
@property (copy) id /* block */ markerTextAttributesForTextList;
@property (readonly) NSTextList *textList;
@property (readonly) NSAttributedString *contents;
@property (readonly) NSDictionary *markerAttributes;
@property (readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSArray *childElements;

+ (id)_createUpdatedTextTabsForTextTabs:(id)a0 markerLocation:(double)a1 listLocation:(double)a2;
+ (id)_createElementWithChildElements:(id)a0 textList:(id)a1 nestingLevel:(long long)a2;
+ (void)_fillTextListElement:(id)a0 toAttributedString:(id)a1;
+ (id)_formattedAttributedStringForRootTextListElement:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_textListElementContentsRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAttributedString:(id)a1;
+ (id)_createTextListElementFromAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 indentLevel:(long long)a2 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 textListElementInstantiationCallback:(id /* block */)a4;
+ (id)_createChildElementsFromAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 indentLevel:(long long)a2 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 textListElementInstantiationCallback:(id /* block */)a4;
+ (id)_rootTextListElementFromAttributedString:(id)a0 atIndex:(long long)a1 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 textListElementInstantiationCallback:(id /* block */)a3;
+ (id)textListElementWithContents:(id)a0 markerAttributes:(id)a1 textList:(id)a2 childElements:(id)a3;
+ (id)textListElementWithChildElements:(id)a0 textList:(id)a1 nestingLevel:(long long)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)enumerateSubstringsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (long long)_indentLevel;
- (void)_reparentWithTextListElement:(id)a0 itemNumber:(long long)a1;
- (double)_markerOffset;
- (double)_indentOffset;
- (id)_createConfiguredParagraphStyleForParagraphStyle:(id)a0;
- (id)_markerString;
- (id)_markerTextAttributesForTextList:(id)a0 attributes:(id)a1;
- (long long)indentLevel;
- (long long)itemNumber;
- (BOOL)_appendsParagraphSeparator;
- (id)initWithParentElement:(id)a0 textList:(id)a1 contents:(id)a2 markerAttributes:(id)a3 childElements:(id)a4;
- (BOOL)isRepresentedElement;
- (id)textListElementWithChildElements:(id)a0;

@end
