@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexItem_macOS : EDSearchableIndexItem <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL requiresPreprocessing;
@property (nonatomic) BOOL loadSecondaryMetadata;
@property (nonatomic) BOOL needsBodyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)mailboxIdentifiersForMessage:(id)a0 result:(id /* block */)a1;
+ (id)suggestionsSearchableItemWithMessage:(id)a0 htmlString:(id)a1 isEncrypted:(BOOL)a2 includeEncryptedBody:(BOOL)a3;

- (id)searchableItem;
- (void)preprocess;
- (void)setNeedsAllAttributesIndexingType;
- (id)fetchIndexableAttachments;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(BOOL)a3;
- (void)addAttachmentAttributesToAttributeSet:(id)a0;
- (void)addUpdatableAttributesToAttributeSet:(id)a0;
- (void)addFlagsAttributesToAttributeSet:(id)a0;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(BOOL)a3 loadSecondaryMetadata:(BOOL)a4;
- (BOOL)_shouldIncludeBodyDataFromMessageBody:(id)a0;

@end
