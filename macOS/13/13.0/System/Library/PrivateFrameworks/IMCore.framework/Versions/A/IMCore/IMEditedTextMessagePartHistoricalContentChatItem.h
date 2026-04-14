@interface IMEditedTextMessagePartHistoricalContentChatItem : IMTextMessagePartChatItem

- (BOOL)canDelete;
- (BOOL)canReply;
- (BOOL)canRetract;
- (BOOL)canEditMessageText;
- (id)_initWithMessageItem:(id)a0 messagePartIndex:(long long)a1 historicalContent:(id)a2 editIndex:(long long)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subject:(id)a5;
- (BOOL)isEditedMessageHistory;

@end
