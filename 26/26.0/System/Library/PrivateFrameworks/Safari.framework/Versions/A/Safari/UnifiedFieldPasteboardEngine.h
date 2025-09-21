@class NSArray;
@protocol UnifiedFieldPasteboardDriver;

@interface UnifiedFieldPasteboardEngine : NSObject {
    BOOL _copyingSearchTerms;
}

@property (readonly, weak, nonatomic) id<UnifiedFieldPasteboardDriver> pasteboardDriver;
@property (readonly, nonatomic) NSArray *writablePasteboardTypes;

- (void).cxx_destruct;
- (BOOL)writeSelectionToPasteboard:(id)a0 types:(id)a1;
- (BOOL)_allTextSelected;
- (BOOL)_isReflectingSearchTermsWithAllTextSelected;
- (id)_replacementStringforWritingToPasteboard;
- (id)_selectedTextAsURL;
- (BOOL)_shouldAttemptRichLinkDonation;
- (BOOL)_shouldWriteSearchTermsToPasteboardAsLink;
- (BOOL)_writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (void)copySearchTerms:(id)a0;
- (void)copyURL:(id)a0;
- (id)initWithPasteboardDriver:(id)a0;

@end
