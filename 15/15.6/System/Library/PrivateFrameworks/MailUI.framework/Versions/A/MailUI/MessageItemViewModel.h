@class NSIndexSet, EMFollowUp, NSString, NSDate;

@interface MessageItemViewModel : NSObject <MessageItemViewModelBuilder>

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
@property (copy, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (copy, nonatomic) NSDate *displayDate;
@property (copy, nonatomic) EMFollowUp *followUp;
@property (nonatomic, getter=isBlockedSender) char blockedSender;
@property (nonatomic) long long unsubscribeType;
@property (nonatomic) char hasAttachments;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isUnscreenedSender) char unscreenedSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItemBuilder:(id /* block */)a0;

@end
