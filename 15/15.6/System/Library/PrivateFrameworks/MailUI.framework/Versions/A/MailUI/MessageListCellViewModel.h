@class NSDate, NSString, NSArray, NSAttributedString, NSDictionary, MUIAvatarImageContext, MUIAvatarImageGenerator, EMFollowUp, NSIndexSet;
@protocol EMCollectionItemID;

@interface MessageListCellViewModel : MessageItemViewModel <MessageListCellViewModelBuilder>

@property (copy, nonatomic) NSDictionary *hintsBySnippetZone;
@property (nonatomic) long long style;
@property (nonatomic) long long recipientType;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) char subjectIsPresent;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSAttributedString *attributedAddress;
@property (nonatomic) char addressIsPresent;
@property (copy, nonatomic) NSArray *addressList;
@property (retain, nonatomic) MUIAvatarImageContext *avatarContext;
@property (retain, nonatomic) MUIAvatarImageGenerator *avatarGenerator;
@property (retain, nonatomic) id<EMCollectionItemID> itemID;
@property (nonatomic) char hideFollowUp;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSString *categorizationState;
@property (nonatomic) char allowAuthenticationWarning;
@property (nonatomic, getter=isBlockedSender) char blockedSender;
@property (nonatomic) long long unsubscribeType;
@property (nonatomic) char hasAttachments;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *displayDate;
@property (copy, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (copy, nonatomic) EMFollowUp *followUp;
@property (nonatomic, getter=isRead) char read;
@property (nonatomic, getter=isFlagged) char flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) char replied;
@property (nonatomic, getter=isForwarded) char forwarded;
@property (nonatomic, getter=isRedirected) char redirected;
@property (nonatomic, getter=isJunk) char junk;
@property (nonatomic, getter=isVIP) char VIP;
@property (nonatomic, getter=isNotify) char notify;
@property (nonatomic, getter=isMute) char mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithItemBuilder:(id /* block */)a0;

@end
