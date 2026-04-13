@class IMHandle, NSUUID, TUConversation, NSDate;

@interface IMTUConversationChatItem : IMTranscriptChatItem

@property (readonly, weak, nonatomic) TUConversation *tuConversation;
@property (readonly, nonatomic) NSUUID *tuConversationUUID;
@property (readonly, nonatomic) IMHandle *conversationInitiator;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)_initWithItem:(id)a0 conversationInitiator:(id)a1;
- (id)activeCall;

@end
