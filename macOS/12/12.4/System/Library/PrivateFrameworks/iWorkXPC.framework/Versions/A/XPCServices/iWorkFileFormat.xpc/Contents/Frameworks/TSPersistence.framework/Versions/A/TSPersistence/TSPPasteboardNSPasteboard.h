@interface TSPPasteboardNSPasteboard : TSPPasteboard

- (id)string;
- (oneway void)invalidate;
- (void)setString:(id)a0;
- (id)URLs;
- (long long)numberOfItems;
- (long long)clearContents;
- (id)strings;
- (id)pasteboardTypes;
- (id)dataForPasteboardType:(id)a0;
- (id)valueForPasteboardType:(id)a0;
- (id)pasteboardTypesForItemSet:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)initWithGeneralPasteboard;
- (id)initWithPasteboardName:(id)a0 create:(BOOL)a1;
- (id)initWithUniquePasteboardName;
- (id)initWithNativePasteboard:(id)a0;
- (void)addItems:(id)a0 isSmartCopy:(BOOL)a1;
- (id)importableRichTextTypes;
- (id)richTextStrings;
- (BOOL)canLoadItemsOfClass:(Class)a0;
- (id)stringForPasteboardType:(id)a0;
- (void)addData:(id)a0 forPasteboardType:(id)a1;
- (id)stringsForPasteboardType:(id)a0 inItemSet:(id)a1;
- (BOOL)containsImportableRichTextTypes;

@end
