@class NSString, NSMutableDictionary, TranscriptDOMController;

@interface TranscriptDOMEventHandler : NSObject <DOMEventListener>

@property (readonly, weak, nonatomic) TranscriptDOMController *domController;
@property (nonatomic) BOOL selectedMessagesAreTextSelectable;
@property (nonatomic) BOOL anyTextSelectable;
@property (retain, nonatomic) NSMutableDictionary *queuedRemoves;
@property (retain, nonatomic) NSMutableDictionary *elementIDToAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)handleEvent:(id)a0;
- (void)runBlockOnAnimationEnd:(id /* block */)a0 forElement:(id)a1;
- (void)_removeReceiptWithGUID:(id)a0 ofType:(id)a1;
- (BOOL)_isContextualMenuMouseDownEvent:(id)a0;
- (id)_guidDictionaryForChatItemElement:(id)a0;
- (void)checkAndPerformStickerMouseDown:(id)a0;
- (void)removeElementOnAnimationEnd:(id)a0 queue:(id)a1;
- (void)stopAnimatingOnAnimationEnd:(id)a0;

@end
