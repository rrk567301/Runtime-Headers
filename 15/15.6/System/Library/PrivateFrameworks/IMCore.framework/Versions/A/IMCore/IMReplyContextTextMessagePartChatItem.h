@class NSString, IMItem;

@interface IMReplyContextTextMessagePartChatItem : IMTextMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) char replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (void).cxx_destruct;
- (char)canDelete;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(char)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 subject:(id)a7;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(char)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 subject:(id)a7 shouldDisplayLink:(char)a8;
- (char)isReplyContextPreview;

@end
