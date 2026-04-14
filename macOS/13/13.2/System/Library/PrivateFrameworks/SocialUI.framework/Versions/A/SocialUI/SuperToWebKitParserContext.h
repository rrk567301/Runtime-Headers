@class IMMessage, TranscriptDOMController, IMMessageChatItem, DOMHTMLElement;

@interface SuperToWebKitParserContext : IMFromSuperParserContext

@property (retain, nonatomic) DOMHTMLElement *containerElement;
@property (nonatomic) IMMessageChatItem *chatItem;
@property (nonatomic) IMMessage *message;
@property (nonatomic) TranscriptDOMController *controller;
@property (nonatomic) DOMHTMLElement *messageElement;
@property BOOL hasInteractableText;
@property BOOL isFileTransferElement;
@property BOOL isMediaElement;
@property BOOL isPassElement;
@property BOOL isAudioMessage;
@property BOOL willFillBubble;
@property BOOL didTrimEmotePrefix;

- (id)name;
- (void).cxx_destruct;
- (id)resultsForLogging;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;
- (void)parserDidStart:(id)a0 bodyAttributes:(id)a1;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7 emoji:(id)a8;
- (void)parserDidEnd:(id)a0;
- (BOOL)shouldPreprocess;
- (id)parser:(id)a0 preprocessedAttributesForAttributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithChatItem:(id)a0 textToParse:(id)a1 elementName:(id)a2 domController:(id)a3;
- (id)outMessageElement;
- (BOOL)_workaroundWebKitLineHeightBug;
- (id)_outMessageElementAsString;
- (void)appendText:(id)a0 toElement:(id)a1;

@end
