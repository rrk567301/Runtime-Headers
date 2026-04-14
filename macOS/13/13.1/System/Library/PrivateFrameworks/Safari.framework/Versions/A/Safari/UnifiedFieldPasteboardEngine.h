@class NSArray;
@protocol UnifiedFieldPasteboardDriver;

@interface UnifiedFieldPasteboardEngine : NSObject

@property (readonly, weak, nonatomic) id<UnifiedFieldPasteboardDriver> pasteboardDriver;
@property (readonly, nonatomic) NSArray *writablePasteboardTypes;

- (void).cxx_destruct;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (id)initWithPasteboardDriver:(id)a0;
- (id)_replacementStringforWritingToPasteboard;
- (BOOL)_allTextSelected;
- (BOOL)_isReflectingSearchTermsWithAllTextSelected;
- (BOOL)_shouldWriteSearchTermsToPasteboardAsLink;
- (id)_selectedTextAsURL;

@end
