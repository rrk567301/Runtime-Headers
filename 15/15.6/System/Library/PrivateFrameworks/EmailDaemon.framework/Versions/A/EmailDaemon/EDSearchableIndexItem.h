@class NSString, NSData, NSDate, NSObject, CSSearchableItem;
@protocol OS_os_log, EDPersistedMessage, EDBaseMessage;

@interface EDSearchableIndexItem : NSObject <EFLoggable, EDIndexableItem> {
    CSSearchableItem *_searchableItem;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EDBaseMessage> baseMessage;
@property (readonly, nonatomic) id<EDPersistedMessage> message;
@property (retain, nonatomic) NSData *bodyData;
@property (nonatomic) char isEncrypted;
@property (nonatomic) char includeEncryptedBody;
@property (readonly, nonatomic) char fetchBody;
@property (readonly, nonatomic) char shouldExcludeFromIndex;
@property (nonatomic) char hasCompleteData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (nonatomic) long long indexingType;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) unsigned long long itemInstantiationTime;
@property (readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property (readonly, nonatomic) char alwaysMarkAsIndexed;
@property (readonly, nonatomic) char requiresPreprocessing;
@property (readonly, nonatomic) char shouldIndexImmediatelyPostPreprocessing;

+ (long long)indexingPriorityByIndexingType:(long long)a0;
+ (id)_accountIdentifierForBaseMessage:(id)a0;
+ (id)_domainIdentifierForBaseMessage:(id)a0;
+ (id)accountIdentifierForMessage:(id)a0;
+ (id)csIdentifierForMailbox:(id)a0;
+ (id)domainIdentifierForAccountID:(id)a0 mailboxPersistentID:(id)a1;
+ (id)domainIdentifierForMessage:(id)a0;
+ (id)gmailLabelsForBaseMessage:(id)a0;
+ (id)itemWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(char)a3;
+ (id)itemWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(char)a2;
+ (id)mailboxIdentifiersForBaseMessage:(id)a0;
+ (id)mailboxIdentifiersForMessage:(id)a0;
+ (id)searchableMessageAttachmentsForBaseMessage:(id)a0 includeEncryptedBody:(char)a1;
+ (id)searchableMessageFlagsForBaseMessage:(id)a0;
+ (id)searchableMessageIDForPersistedMessageID:(id)a0;
+ (id)searchableMessageUpdateForBaseMessage:(id)a0;
+ (id)suggestionsSearchableItemWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(char)a2 isEncrypted:(char)a3 includeEncryptedBody:(char)a4;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)searchableItem;
- (void)preprocess;
- (void)addDataDetectionAttributesToAttributeSet:(id)a0;
- (void)addFlagsAttributesToAttributeSet:(id)a0;
- (void)addMailCategoryAttributesToAttributeSet:(id)a0;
- (void)addStaticAttributesToAttributeSet:(id)a0;
- (void)addUpdatableAttributesToAttributeSet:(id)a0;
- (id)addressesAttributeKey;
- (id)calendarEventsAttributeKey;
- (id)fetchIndexableAttachments;
- (id)flightNumbersAttributeKey;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(char)a3;
- (id)initWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(char)a2;
- (id)linksAttributeKey;
- (id)phoneNumbersAttributeKey;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (id)trackingNumbersAttributeKey;

@end
