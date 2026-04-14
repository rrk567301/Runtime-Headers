@class NSAttributedString, NSDate;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem

@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, nonatomic) BOOL isShowingEditHistory;
@property (readonly, nonatomic) BOOL showTranslationAlternateText;
@property (readonly, nonatomic) long long numberOfPreviousEdits;
@property (readonly, nonatomic) NSDate *lastEditDateForMessagePart;

- (unsigned char)contentType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)hasSubject;
- (void).cxx_destruct;
- (id)messageSummaryInfo;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 isShowingEditHistory:(BOOL)a5 showTranslationAlternateText:(BOOL)a6;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 subject:(id)a4 shouldDisplayLink:(BOOL)a5 isShowingEditHistory:(BOOL)a6 showTranslationAlternateText:(BOOL)a7;
- (id)_initWithItem:(id)a0 text:(id)a1 translationSecondaryText:(id)a2 index:(long long)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subject:(id)a5 shouldDisplayLink:(BOOL)a6 isShowingEditHistory:(BOOL)a7 showTranslationAlternateText:(BOOL)a8;
- (id)_initWithItem:(id)a0 text:(id)a1 translationSecondaryText:(id)a2 index:(long long)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subject:(id)a5 visibleAssociatedMessageChatItems:(id)a6 isShowingEditHistory:(BOOL)a7 showTranslationAlternateText:(BOOL)a8 shouldDisplayLink:(BOOL)a9;
- (void)_setShowTranslationAlternateText:(BOOL)a0;
- (BOOL)canEditMessageText;
- (id)copyWithIsShowingEditHistory:(BOOL)a0;
- (id)copyWithShowTranslationAlternateText:(BOOL)a0;
- (void)enumerateEmojiTokensWithBlock:(id /* block */)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (void)setShouldDisplayRichLink:(BOOL)a0;
- (BOOL)shouldDisplayRichLink;
- (BOOL)supportsCommunicationSafety;
- (BOOL)supportsSuggestedActionsMenu;

@end
