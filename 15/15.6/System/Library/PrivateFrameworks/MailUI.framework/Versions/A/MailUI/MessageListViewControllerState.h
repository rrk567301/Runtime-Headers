@class NSArray, NSString;

@interface MessageListViewControllerState : NSObject <EFPubliclyDescribable>

@property (nonatomic) char isCompact;
@property (nonatomic) char useSplitViewStyling;
@property (nonatomic) char shouldDisplayUnreadAndVIP;
@property (nonatomic) char canShowReadLaterDate;
@property (nonatomic) char containsInbox;
@property (nonatomic) char containsSent;
@property (nonatomic) char containsOnlyInboxScope;
@property (nonatomic) char containsArchiveMailbox;
@property (nonatomic) char containsDraftsMailbox;
@property (nonatomic) char containsOutbox;
@property (nonatomic) char containsDraftsOrOutbox;
@property (nonatomic) char isOutgoingMailbox;
@property (nonatomic) char containsTrashMailbox;
@property (nonatomic) char isUnifiedMailbox;
@property (nonatomic) char containsSmartMailbox;
@property (nonatomic) char containsReadLaterMailbox;
@property (nonatomic) char containsSendLaterMailbox;
@property (nonatomic) char containsFollowUpMailbox;
@property (nonatomic) char isEditing;
@property (nonatomic) char didAlertOnBlankCell;
@property (nonatomic) char didRecordTailspin;
@property (nonatomic) char isSearch;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) char isCommerceMailbox;
@property (nonatomic) char isSenderSpecificMailbox;
@property (copy, nonatomic) NSString *sortKeyPath;
@property (nonatomic) char isSortedAscending;
@property (nonatomic) char hasDateBasedSortOrder;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateWithMailboxes:(id)a0 senderSpecificMessageListItem:(id)a1;

@end
