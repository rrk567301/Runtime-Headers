@class NSString, SCRElement, NSArray;

@interface SCRFormulaTextArea : SCRStandardText {
    struct { unsigned char registeredTextEntryDeniedNotification : 1; unsigned char registeredTokenForKeyboardInsertionDeletedNotification : 1; unsigned char suppressEchoContentChange : 1; } _formulaTextAreaFlags;
}

@property (retain, nonatomic) SCRElement *completionToken;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } completionTokenRange;
@property (retain, nonatomic) NSString *lastCompletionTokenTitleForOutput;
@property (retain, nonatomic) NSString *lastCompletionTokenTitleForWordEcho;
@property (retain, nonatomic) NSArray *lastReferencedCellUIElementsForMovingReference;

- (void).cxx_destruct;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)_completionTokenTitleDidChange:(id)a0;
- (double)wordEchoDelay;
- (void)echoLastTypedWord:(id)a0;
- (void)echoContentChange;
- (void)_textEntryWasDenied:(id)a0;
- (void)_tokenForKeyboardInsertionDeleted:(id)a0;
- (BOOL)wantsExpandedAttachmentsForItemName;
- (BOOL)shouldSuppressTextAttributesEcho;
- (void)_completionTokenTitleDidChangeWithUserInfo:(id)a0;
- (BOOL)_echoLastTypedWordInCompletionTokenTitle:(id)a0 restrictSearchToRangeOfLength:(unsigned long long)a1 request:(id)a2 prependPause:(BOOL)a3;
- (void)_echoCompletionTokenTitleChangesToRequest:(id)a0 userInfo:(id)a1;

@end
