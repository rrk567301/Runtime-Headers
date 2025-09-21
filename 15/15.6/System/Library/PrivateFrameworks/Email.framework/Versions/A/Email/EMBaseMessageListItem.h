@class NSURL, EMGeneratedSummary, ECSubject, NSDate, NSObject, EMCategory, ECMessageFlags, NSString, EMFollowUp, EFFuture, NSIndexSet, NSArray, EMReadLater, EMObjectID, EMMessageRepository;
@protocol OS_os_log, ECEmailAddressConvertible, EMCollectionItemID;

@interface EMBaseMessageListItem : EMRepositoryObject <EFLoggable, EMBaseMessageListItemBuilder, EMMutableMessageListItem, EMMessageListItem> {
    unsigned long long _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMMessageRepository *repository;
@property (retain, nonatomic) id<ECEmailAddressConvertible> senderAddress;
@property (copy, nonatomic) NSArray *bccList;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDate *date;
@property (retain) NSDate *displayDate;
@property (retain) ECSubject *subject;
@property (retain) NSArray *groupedSenderMessageListItems;
@property (copy) NSString *summary;
@property (copy) EMGeneratedSummary *generatedSummary;
@property (copy) NSArray *senderList;
@property (copy) NSArray *toList;
@property (copy) NSArray *ccList;
@property char isToMe;
@property char isCCMe;
@property (retain) ECMessageFlags *flags;
@property char hasUnflagged;
@property (copy) NSIndexSet *flagColors;
@property char isVIP;
@property char isBlocked;
@property long long unsubscribeType;
@property char hasAttachments;
@property char isAuthenticated;
@property char allowAuthenticationWarning;
@property long long conversationNotificationLevel;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (retain) EMFollowUp *followUp;
@property (retain) EMCategory *category;
@property long long businessID;
@property (copy) NSString *businessLogoID;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id<EMCollectionItemID> displayMessageItemID;
@property unsigned long long attachmentCount;
@property struct { unsigned char red; unsigned char green; unsigned char blue; } messageColor;
@property char messageColorIsHighlight;
@property long long priority;
@property char wasActedOnByExtension;
@property unsigned long long messageSize;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EFFuture *displayMessage;
@property (readonly) char deleteMovesToTrash;
@property (readonly) char supportsArchiving;
@property (readonly) char shouldArchiveByDefault;
@property (readonly) char isEditable;
@property (readonly) char isGroupedSender;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithObjectID:(id)a0;
- (id)flagDescription;
- (id)changeFrom:(id)a0;
- (void)_commonInitWithBaseBuilder:(id /* block */)a0;
- (char)arePropertiesEqual:(id)a0;
- (id)initWithObjectID:(id)a0 baseBuilder:(id /* block */)a1;
- (void)setRepository:(id)a0;

@end
