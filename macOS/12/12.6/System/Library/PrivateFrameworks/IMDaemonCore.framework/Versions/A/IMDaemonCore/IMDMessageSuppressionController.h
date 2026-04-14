@class NSMutableDictionary;

@interface IMDMessageSuppressionController : NSObject {
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
}

@property (nonatomic) double timeToSuppressMessages;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)messageStore;
- (id)broadcaster;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)a0;
- (BOOL)hasSuppressedMessageID:(id)a0 chatGUID:(id)a1;
- (void)handleReadReceiptForChatGUID:(id)a0 messageGUID:(id)a1 IDSService:(id)a2;
- (id)storageController;
- (BOOL)shouldSuppressMessageForChat:(id)a0 messageGUID:(id)a1;
- (void)setupTimerForChatGUID:(id)a0 messageGUID:(id)a1;
- (void)handleIncomingMessageForChatGUID:(id)a0 messageGUID:(id)a1;
- (void)endMessageSuppression;
- (void)endMessageSuppressionForChatGUID:(id)a0;
- (void)setSuppressedMessage:(id)a0 inChatWithGUID:(id)a1;
- (BOOL)shouldSuppressMessageForChat:(id)a0 message:(id)a1;
- (void)setupTimerForChatGUID:(id)a0 message:(id)a1;
- (void)_handleReceiptForChatGUID:(id)a0 messageGUID:(id)a1 unsuppressEarlierMessages:(BOOL)a2 IDSService:(id)a3;
- (void)_suppressionTimerFired:(id)a0;
- (BOOL)setupTimerForChatGUID:(id)a0;
- (void)setSuppressedMessageGUID:(id)a0 inChatWithGUID:(id)a1;
- (void)handlePlayedReceiptForChatGUID:(id)a0 messageGUID:(id)a1;

@end
