@class NSString, IMItem;

@interface IMReplyContextAggregateMessagePartChatItem : IMAggregateMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) char replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (void).cxx_destruct;
- (char)canDelete;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(char)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subparts:(id)a5;
- (char)isReplyContextPreview;
- (char)supportsSuggestedActionsMenu;

@end
