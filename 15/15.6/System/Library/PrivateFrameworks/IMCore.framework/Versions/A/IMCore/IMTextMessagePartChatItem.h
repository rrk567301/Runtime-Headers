@class NSAttributedString, NSDate;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem

@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, nonatomic) char isShowingEditHistory;
@property (readonly, nonatomic) long long numberOfPreviousEdits;
@property (readonly, nonatomic) NSDate *lastEditDateForMessagePart;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned char)contentType;
- (id)messageSummaryInfo;
- (char)hasSubject;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 isShowingEditHistory:(char)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 shouldDisplayLink:(char)a5 isShowingEditHistory:(char)a6;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 visibleAssociatedMessageChatItems:(id)a5 isShowingEditHistory:(char)a6;
- (char)canEditMessageText;
- (id)copyWithIsShowingEditHistory:(char)a0;
- (void)enumerateEmojiTokensWithBlock:(id /* block */)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (void)setShouldDisplayRichLink:(char)a0;
- (char)shouldDisplayRichLink;
- (char)supportsCommunicationSafety;
- (char)supportsSuggestedActionsMenu;

@end
