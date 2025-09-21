@class NSString, IMAVChat, NSDictionary, IMAVChatProxy;

@interface IMAVChatParticipantProxy : NSObject {
    NSDictionary *_info;
    IMAVChatProxy *_chat;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) char _inviteDelivered;
@property (readonly, nonatomic) IMAVChat *avChat;

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 chat:(id)a1;
- (char)isLocalParticipant;

@end
