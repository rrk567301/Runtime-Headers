@class NSArray;
@protocol UnifiedFieldPasteboardDriver;

@interface UnifiedFieldPasteboardEngine : NSObject

@property (readonly, weak, nonatomic) id<UnifiedFieldPasteboardDriver> pasteboardDriver;
@property (readonly, nonatomic) NSArray *writablePasteboardTypes;

- (void).cxx_destruct;
- (char)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (char)_allTextSelected;
- (char)_isReflectingSearchTermsWithAllTextSelected;
- (id)_replacementStringforWritingToPasteboard;
- (id)_selectedTextAsURL;
- (char)_shouldAttemptRichLinkDonation;
- (char)_shouldWriteSearchTermsToPasteboardAsLink;
- (id)initWithPasteboardDriver:(id)a0;

@end
