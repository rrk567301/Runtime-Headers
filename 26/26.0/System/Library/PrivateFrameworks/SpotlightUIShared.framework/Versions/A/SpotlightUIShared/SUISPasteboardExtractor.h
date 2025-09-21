@interface SUISPasteboardExtractor : NSObject

+ (id)attributeSetWithPasteboard:(id)a0;
+ (id)identifyingStringFromDate:(id)a0;
+ (void)modifyAttributeSet:(id)a0 withPasteboard:(id)a1;
+ (Class)pasteboardExtractorClassForPasteboardItems:(id)a0;
+ (BOOL)supportsPasteboardItems:(id)a0;

@end
