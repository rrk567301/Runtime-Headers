@class NSArray, NSMutableDictionary, IPCircularBufferArray;

@interface IPTextMessageConversation : NSObject {
    IPCircularBufferArray *_lastMessages;
}

@property (retain) NSMutableDictionary *messageByMessageIdentifierDictionary;
@property (retain) NSMutableDictionary *eventsByMessageIdentifierDictionary;
@property (copy, nonatomic) NSArray *allMessages;

+ (id)collapseMessages:(id)a0;
+ (id)collapsedMessagesFromMessages:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addMessage:(id)a0;
- (void)_scanEventsInLastMessageOnly:(char)a0 synchronously:(char)a1 completionHandler:(id /* block */)a2;
- (id)eventsInPreviouslyScannedMessageWithIdentifier:(id)a0;
- (id)messageForIdentifier:(id)a0;
- (void)scanEventsInLastMessageOnly:(char)a0 synchronously:(char)a1 completionHandler:(id /* block */)a2;

@end
