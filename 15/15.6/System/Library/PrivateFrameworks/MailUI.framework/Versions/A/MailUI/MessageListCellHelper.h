@class NSView, MUIBrandIndicatorProvider, EMNSUserDefaultsBoolObserver, NSString, EFAutoCancelationToken, EMCategory, EMCachingContactStore, EFFuture;
@protocol MessageListCellHelperApplicationProxy, MessageListCellViewable, EMMessageListItem;

@interface MessageListCellHelper : NSObject <MessageListCellDisclosureUpdatable>

@property (retain, nonatomic) EMNSUserDefaultsBoolObserver *automaticallySummarizeMessages;
@property (retain, nonatomic) EFAutoCancelationToken *updateSummaryCancelationToken;
@property (retain, nonatomic) id<MessageListCellHelperApplicationProxy> applicationProxy;
@property (readonly, weak, nonatomic) NSView *parentView;
@property (readonly, weak, nonatomic) NSView *contentView;
@property (readonly, nonatomic) NSView<MessageListCellViewable> *cellView;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;
@property (readonly, nonatomic) long long style;
@property (nonatomic, getter=isCompact) char compact;
@property (nonatomic) char disclosureEnabled;
@property (nonatomic) char shouldAnnotateReplyOrForward;
@property (nonatomic) char shouldDisplayUnreadAndVIP;
@property (nonatomic, getter=isOutgoingMailbox) char outgoingMailbox;
@property (nonatomic, getter=isInbox) char inbox;
@property (nonatomic, getter=isExpanded) char expanded;
@property (nonatomic) char canShowReadLaterDate;
@property (nonatomic, getter=isVisible) char visible;
@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic, getter=isHighlighted) char highlighted;
@property (nonatomic, getter=isPriority) char priority;
@property (nonatomic, getter=isSearchResult) char searchResult;
@property (nonatomic, getter=isLocalMailboxSearchScope) char localMailboxSearchScope;
@property (nonatomic, getter=shouldHideFollowUp) char hideFollowUp;
@property (retain, nonatomic) EFFuture *predictedMailbox;
@property (nonatomic) long long numberOfPreviewLines;
@property (retain, nonatomic) MUIBrandIndicatorProvider *brandIndicatorProvider;
@property (nonatomic) char senderSpecificCell;
@property (retain, nonatomic) EMCategory *category;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic) char shouldShowHighImpact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_significantTimeChange;
- (id)_cellViewModelForMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (long long)_cellViewRelationshipTypeForFlags:(id)a0;
- (id)_generatedSummaryForUpdatingCellView:(id)a0;
- (id)_generatedSummaryString;
- (void)_updateGeneratedSummary;
- (void)_updateViewsToMatchMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (id)initWithParentView:(id)a0 contentView:(id)a1 cellView:(id)a2 applicationProxy:(id)a3;
- (void)setDisclosureEnabled:(char)a0 animated:(char)a1;
- (void)setMessageListItem:(id)a0 style:(long long)a1;
- (void)setMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (void)setShowsAccessory:(char)a0 showingDetail:(char)a1;

@end
