@class NSURL, EMGeneratedSummary, ECSubject, NSDate, NSObject, EMCategory, ECMessageFlags, EMObjectID, EMThreadObjectID, EMMailboxScope, NSString, EMFollowUp, EFFuture, NSIndexSet, NSArray, NSNumber, EMQuery, EMReadLater, EMMessageRepository;
@protocol OS_os_log, EMMailboxTypeResolver, EMCollectionItemID;

@interface EMThread : EMQueryingCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem> {
    unsigned long long _isEditable;
    EMMailboxScope *_mailboxScope;
    id<EMMailboxTypeResolver> _mailboxTypeResolver;
    NSArray *_mailboxes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxScopeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxTypeResolverLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMMessageRepository *repository;
@property (readonly, nonatomic) EMQuery *originatingQuery;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, copy, nonatomic) EMThreadObjectID *objectID;
@property (retain) id<EMMailboxTypeResolver> mailboxTypeResolver;
@property (retain) NSDate *date;
@property (retain) NSDate *displayDate;
@property (retain) ECSubject *subject;
@property (copy) NSString *summary;
@property (copy) EMGeneratedSummary *generatedSummary;
@property (copy) NSArray *senderList;
@property (copy) NSArray *toList;
@property (copy) NSArray *ccList;
@property BOOL isToMe;
@property BOOL isCCMe;
@property (retain) ECMessageFlags *flags;
@property BOOL hasUnflagged;
@property (copy) NSIndexSet *flagColors;
@property BOOL isVIP;
@property BOOL isBlocked;
@property long long unsubscribeType;
@property BOOL hasAttachments;
@property BOOL isAuthenticated;
@property BOOL allowAuthenticationWarning;
@property long long conversationNotificationLevel;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (retain) EMFollowUp *followUp;
@property (retain) EMCategory *category;
@property long long businessID;
@property (copy) NSString *businessLogoID;
@property (retain) NSArray *groupedSenderMessageListItems;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id<EMCollectionItemID> displayMessageItemID;
@property unsigned long long attachmentCount;
@property struct { unsigned char red; unsigned char green; unsigned char blue; } messageColor;
@property BOOL messageColorIsHighlight;
@property long long priority;
@property BOOL wasActedOnByExtension;
@property unsigned long long messageSize;
@property long long searchResultType;
@property (retain) NSNumber *searchRelevanceScore;
@property BOOL isUrgent;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EFFuture *displayMessage;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly) BOOL supportsArchiving;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL isEditable;
@property (readonly) BOOL isGroupedSender;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (BOOL)_shouldArchiveByDefaultForMailboxes:(id)a0;

- (id)query;
- (void)setRepository:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)changeFrom:(id)a0;
- (id)initWithObjectID:(id)a0 originatingQuery:(id)a1 builder:(id /* block */)a2;
- (void)_commonInitWithOriginatingQuery:(id)a0 builder:(id /* block */)a1;
- (id)itemIDForObjectID:(id)a0;
- (void)notifyChangeObserversAboutChangedItemIDs:(id)a0 extraInfo:(id)a1;
- (BOOL)objectIDBelongsToCollection:(id)a0;
- (id)objectIDForItemID:(id)a0;

@end
