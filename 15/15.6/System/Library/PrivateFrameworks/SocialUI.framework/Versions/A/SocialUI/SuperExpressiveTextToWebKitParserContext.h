@class NSString, IMExpressiveSendAsTextChatItem, TranscriptDOMController, DOMHTMLElement;

@interface SuperExpressiveTextToWebKitParserContext : IMFromSuperParserContext

@property (retain, nonatomic) DOMHTMLElement *containerElement;
@property (readonly, nonatomic) NSString *expressiveText;
@property (nonatomic) IMExpressiveSendAsTextChatItem *chatItem;
@property (nonatomic) TranscriptDOMController *controller;
@property (nonatomic) DOMHTMLElement *messageElement;
@property char hasInteractableText;
@property char isFileTransferElement;
@property char isMediaElement;
@property char isPassElement;
@property char isAudioMessage;
@property char willFillBubble;
@property char didTrimEmotePrefix;
@property char displayBigEmoji;

- (id)name;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7 isAnimoji:(id)a8;
- (void)parserDidEnd:(id)a0;
- (void)parserDidStart:(id)a0 bodyAttributes:(id)a1;
- (id)resultsForLogging;
- (char)shouldPreprocess;
- (void)_appendText:(id)a0 toElement:(id)a1;
- (id)_outMessageElementAsString;
- (char)_workaroundWebKitLineHeightBug;
- (id)initWithChatItem:(id)a0 textToParse:(id)a1 elementName:(id)a2 domController:(id)a3;
- (id)outMessageElement;

@end
