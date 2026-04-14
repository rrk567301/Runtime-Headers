@class EDEnqueuedDonation, NSString, NSDate, EDPersistedMessageID;

@interface EmailDaemon.EDSearchableNewMessageItem : NSObject <EDIndexableItem> {
    void /* function */ identifier;
    void /* function */ domainIdentifier;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ sizeInBytes;
}

@property (nonatomic, readonly) BOOL alwaysMarkAsIndexed;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) long long estimatedSizeInBytes;
@property (nonatomic, readonly) BOOL hasCompleteData;
@property (nonatomic, readonly) BOOL requiresPreprocessing;
@property (nonatomic, readonly) BOOL shouldExcludeFromIndex;
@property (nonatomic, readonly) BOOL shouldIndexImmediatelyPostPreprocessing;
@property (nonatomic, readonly) unsigned long long itemInstantiationTime;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) EDPersistedMessageID *messagePersistentID;
@property (nonatomic) long long indexingType;
@property (nonatomic, retain) EDEnqueuedDonation *enqueuedDonation;

- (void).cxx_destruct;
- (id)init;
- (id)searchableItem;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;

@end
