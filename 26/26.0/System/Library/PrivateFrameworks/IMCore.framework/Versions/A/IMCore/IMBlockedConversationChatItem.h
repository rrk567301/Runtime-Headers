@class NSArray;

@interface IMBlockedConversationChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSArray *blockedRecipients;
@property (readonly, nonatomic) BOOL canLeaveChat;
@property (readonly, nonatomic) BOOL isGroupMessage;

- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 blockedRecipients:(id)a1 canLeaveChat:(BOOL)a2 isGroupMessage:(BOOL)a3;

@end
