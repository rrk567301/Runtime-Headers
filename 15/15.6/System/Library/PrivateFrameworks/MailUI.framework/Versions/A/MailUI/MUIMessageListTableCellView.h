@class ToCCIndicator, EMCategory, NSButton, MessageListCellLayoutValuesHelper, MessageListCellHelper, MessageListCellLayoutValues, MessageListCellViewModel, NSString, EFFuture, NSLayoutConstraint, EMCachingContactStore, MUIMessageListObjectProxy, NSColor;
@protocol MessageListCellDisclosureDelegate, EMMessageListItem, ECMessage, MUIMessageListTableCellViewDelegate, EMCollectionItemID, EFCancelable;

@interface MUIMessageListTableCellView : NSTableCellView <MessageListSectionCellCapable, MessageListCellViewable> {
    NSColor *_textColor;
}

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (retain) MUIMessageListObjectProxy *objectValue;
@property (retain, nonatomic) ToCCIndicator *toCCIndicator;
@property (retain, nonatomic) NSLayoutConstraint *subjectLeadingToIndicatorConstraint;
@property (weak, nonatomic) NSButton *replyButton;
@property (readonly, nonatomic) id<ECMessage> message;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) char showToCc;
@property (nonatomic) char showSnippetHighlighting;
@property (weak, nonatomic) id<MUIMessageListTableCellViewDelegate> delegate;
@property (nonatomic) long long backgroundViewConfigurationGrouping;
@property (nonatomic) char needsFlushSeparator;
@property (nonatomic, getter=isSelected) char selected;
@property (weak, nonatomic) id<MessageListCellDisclosureDelegate> disclosureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MessageListCellHelper *cellHelper;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;
@property (retain, nonatomic) id<EMCollectionItemID> itemID;
@property (retain, nonatomic) EFFuture *messageListItemFuture;
@property (retain, nonatomic) id<EFCancelable> messageListItemFetchTimeoutCancelable;
@property (nonatomic) long long chevronType;
@property (nonatomic, getter=isEditing) char editing;
@property (nonatomic, getter=isCompact) char compact;
@property (nonatomic) long long numberOfPreviewLines;
@property (nonatomic, getter=isSenderSpecificCell) char senderSpecificCell;
@property (retain, nonatomic) EMCategory *category;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic) char shouldShowHighImpact;
@property (nonatomic) char shouldAnnotateReplyOrForward;
@property (nonatomic) long long annotatedRelationshipType;
@property (retain, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (readonly, nonatomic) MessageListCellLayoutValues *layoutValues;
@property (retain, nonatomic) MessageListCellViewModel *viewModel;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic) char hasGeneratedSummary;
@property (readonly, nonatomic) NSButton *disclosureButton;

+ (double)_calculateRowHeightUsingTextField:(id)a0;
+ (id)changeAttributedStringHighlighting:(id)a0 useSelectedStyle:(char)a1;
+ (id)keyPathsForValuesAffectingMessage;
+ (id)keyPathsForValuesAffectingTextColor;
+ (unsigned long long)rowGroupingStyleFromCellGrouping:(long long)a0;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)setEditing:(char)a0 animated:(char)a1;
- (void)setNeedsUpdateConfiguration;
- (void)_updateToCCIndicatorWithString:(id)a0;
- (void)_setSymbolFonts;
- (void)refreshForSignificantTimeChange;
- (void)_preserveContentTintForImageViews:(id)a0;
- (void)applyIndicatorPreviewChangeAction:(id)a0;
- (void)setDisclosureEnabled:(char)a0 animated:(char)a1;
- (void)setDisplayUnreadDot:(char)a0;
- (void)setDisplayVIP:(char)a0;
- (void)updateFontsUsingBold:(char)a0;
- (char)verifyContentVisibility:(id *)a0;

@end
