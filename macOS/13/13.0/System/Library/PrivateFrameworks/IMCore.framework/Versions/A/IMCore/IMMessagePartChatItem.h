@class NSString, NSArray, IMMessageItem, IMMessagePartHighlightChatItem, NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost>

@property (readonly, copy, nonatomic) NSString *threadIdentifierForTapback;
@property (nonatomic, setter=_setIndex:) long long index;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (nonatomic) BOOL chatInScrutinyMode;
@property (nonatomic, getter=isAllowlistedRichLinkSender) BOOL allowlistedRichLinkSender;
@property (nonatomic) unsigned long long replyCount;
@property (readonly, copy, nonatomic) NSAttributedString *text;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property (readonly, nonatomic) NSArray *messageEditChatItems;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } originalMessagePartRange;
@property (readonly, nonatomic) BOOL hasSubject;
@property (nonatomic) BOOL isBusiness;
@property (readonly, nonatomic) BOOL isEditedMessagePart;
@property (readonly, nonatomic) BOOL isFailedEditMessagePart;
@property (readonly, nonatomic) BOOL isRetractedMessagePart;
@property (readonly, nonatomic) BOOL isFailedRetractMessagePart;
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL requiresSiriAttribution;
@property (readonly, nonatomic) BOOL requiresFaceTimeAttribution;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) long long syndicationStatus;
@property (readonly, copy, nonatomic) IMMessagePartHighlightChatItem *messageHighlightChatItem;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSiriEnabled;
+ (id)_guidForMessage:(id)a0 url:(id)a1;
+ (id)_newMessagePartsForMessageItem:(id)a0;
+ (id)_defaultRichLinkAllowlist;
+ (BOOL)_isAllowlistedURL:(id)a0;
+ (BOOL)_isAllowlistedRichLinkSender:(id)a0 isBusiness:(BOOL)a1;
+ (id)_additionalSupportedRichLinkSchemesForAllowlistedSender:(id)a0;
+ (id)_richLinkRangesForMessageText:(id)a0 sender:(id)a1 isAllowlistedRichLinkSender:(BOOL)a2;
+ (BOOL)_supportsRichLinkURL:(id)a0 forSender:(id)a1 isAllowlistedRichLinkSender:(BOOL)a2;
+ (id)_newMessagePartsForMessageItem:(id)a0 chatContext:(id)a1;
+ (id)messageBodyStringForCMMMessage:(id)a0;
+ (id)_newDetonatedMessagePartsForMessageItem:(id)a0 chatContext:(id)a1 photosPluginPayload:(id)a2;
+ (id)_newMessagePartsForMessageItem:(id)a0 chatContext:(id)a1 photosPluginPayload:(id)a2;
+ (long long)_attachmentStackAggregationThreshold;
+ (id)aggregatePartsForParts:(id)a0 forMessage:(id)a1 context:(id)a2;
+ (id)messageBodyStringForAttachmentGUIDs:(id)a0;
+ (BOOL)_shouldAggregateForTransferType:(id)a0;
+ (id)_messageItemWithPartsDeleted:(id)a0 fromMessageItem:(id)a1 indexesOfItemsDeleted:(id *)a2 indexToRangeMapping:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned char)contentType;
- (BOOL)isHighlighted;
- (id)messageSummaryInfo;
- (BOOL)canDelete;
- (id)transcriptText;
- (long long)messagePartAttributeName;
- (BOOL)canRetract;
- (id)_initWithItem:(id)a0 index:(long long)a1 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_initWithItem:(id)a0 index:(long long)a1 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 syndicationBehavior:(long long)a3;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 visibleAssociatedMessageChatItems:(id)a4;
- (void)_setMessageEditChatItems:(id)a0;
- (BOOL)canSendMessageAcknowledgment;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;

@end
