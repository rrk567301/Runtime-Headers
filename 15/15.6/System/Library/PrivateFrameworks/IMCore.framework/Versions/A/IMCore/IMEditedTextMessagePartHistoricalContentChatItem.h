@class IMMessagePartHistoricalContent;

@interface IMEditedTextMessagePartHistoricalContentChatItem : IMTextMessagePartChatItem

@property (readonly, nonatomic) IMMessagePartHistoricalContent *historicalContent;

- (void).cxx_destruct;
- (char)canDelete;
- (id)_initWithMessageItem:(id)a0 messagePartIndex:(long long)a1 historicalContent:(id)a2 editIndex:(long long)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subject:(id)a5;
- (char)canEditMessageText;
- (char)canReply;
- (char)canRetract;
- (char)isEditedMessageHistory;

@end
