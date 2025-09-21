@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexItem_macOS : EDSearchableIndexItem <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) char requiresPreprocessing;
@property (nonatomic) char loadSecondaryMetadata;
@property (nonatomic) char needsBodyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gmailLabelsForBaseMessage:(id)a0;
+ (id)mailboxIdentifiersForBaseMessage:(id)a0;
+ (id)searchableMessageAttachmentsForBaseMessage:(id)a0 includeEncryptedBody:(char)a1;
+ (id)searchableMessageUpdateForBaseMessage:(id)a0;
+ (char)_shouldIncludeBodyDataFromMessageBody:(id)a0 includeEncryptedBody:(char)a1;
+ (id)suggestionsSearchableItemWithMessage:(id)a0 htmlString:(id)a1 isEncrypted:(char)a2 includeEncryptedBody:(char)a3;

- (id)searchableItem;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(char)a3;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (char)shouldIndexImmediatelyPostPreprocessing;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(char)a3 loadSecondaryMetadata:(char)a4;
- (id)initWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(char)a2 loadSecondaryMetadata:(char)a3;

@end
