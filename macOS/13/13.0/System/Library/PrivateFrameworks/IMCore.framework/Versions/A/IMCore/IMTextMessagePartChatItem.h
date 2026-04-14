@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem

@property (readonly, copy, nonatomic) NSAttributedString *subject;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned char)contentType;
- (id)messageSummaryInfo;
- (BOOL)hasSubject;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (BOOL)shouldDisplayRichLink;
- (void)setShouldDisplayRichLink:(BOOL)a0;
- (BOOL)canEditMessageText;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 shouldDisplayLink:(BOOL)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 visibleAssociatedMessageChatItems:(id)a5;

@end
