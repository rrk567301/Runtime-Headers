@class IMChipReply;

@interface IMSuggestedReplyMessagePartChatItem : IMAttachmentMessagePartChatItem

@property (readonly, copy, nonatomic) IMChipReply *suggestedReply;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItem:(id)a0 suggestedReply:(id)a1;

@end
