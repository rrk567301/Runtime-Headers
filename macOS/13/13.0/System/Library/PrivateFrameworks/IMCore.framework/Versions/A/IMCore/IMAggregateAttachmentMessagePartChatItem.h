@class NSArray;

@interface IMAggregateAttachmentMessagePartChatItem : IMAttachmentMessagePartChatItem

@property (copy, nonatomic) NSArray *aggregateAttachmentParts;
@property (readonly, copy, nonatomic) NSArray *transferGUIDs;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isAttachmentContiguousWithChatItem:(id)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUIDs:(id)a4 chatContext:(id)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUIDs:(id)a4 chatContext:(id)a5 visibleAssociatedMessageChatItems:(id)a6;

@end
