@class NSManagedObjectID, NSString, NSDictionary, NSURL, NSData, NSNumber, CalManagedCalendarItem;

@interface CalManagedAttachment : CalManagedObject <EKProtocolAttachment> {
    NSString *_filename;
}

@property (retain) NSString *contentType;
@property (retain) NSString *contentTypeFromServer;
@property BOOL isCached;
@property (retain) CalManagedCalendarItem *item;
@property (retain) NSString *attachmentID;
@property (retain) NSURL *url;
@property (retain) NSURL *urlOnServer;
@property (retain) NSString *uuid;
@property BOOL isAutoArchived;
@property (retain) NSData *data;
@property (retain) NSString *filename;
@property (retain) NSURL *pathOnDisk;
@property (retain) NSString *filenameInCache;
@property (retain) NSString *filenameSuggestedByServer;
@property BOOL omitSyncRecord;
@property (readonly, retain) NSString *attachmentIDOnServer;
@property (readonly, retain) NSURL *urlOnDisk;
@property (readonly, retain) NSNumber *isAutoArchivedNumber;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)uniqueIdentifierForObject:(id)a0;
+ (void)addAttachmentPrefetchToCalendarItemFetch:(id)a0;
+ (id)bestFilenameForAttachment:(id)a0;
+ (id)fetchRequestWithURL:(id)a0 inGroup:(id)a1 inManagedObjectContext:(id)a2;
+ (BOOL)_isManagedAttachmentCalendar:(id)a0;
+ (id)fetchRequestWithURL:(id)a0 inManagedObjectContext:(id)a1;

- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)awakeFromInsert;
- (void)willRefresh:(BOOL)a0;
- (void)willSave;
- (void)agentDownloadSingleAttachment;
- (void)setAttachmentIDOnServer:(id)a0;
- (void)importiCalendarProperty:(id)a0 inComponent:(id)a1 fromDocument:(id)a2 inCalendar:(id)a3;
- (id)_iCalendarElementWithOptions:(unsigned long long)a0;
- (void)setFilenameInCache:(id)a0;
- (id)filenameInCache;
- (void)_importiCalendarProperty:(id)a0 inComponent:(id)a1 fromDocument:(id)a2 inCalendar:(id)a3 accumulatedAttachmentFilenames:(id)a4;
- (BOOL)isLocalAttachment;
- (BOOL)isInDetachedEvent;
- (id)uniqueKeyForObject;
- (id)enclosingSource;
- (id)keysOnlyRelevantToNetworkDetails;
- (void)downloadSingleAttachment;

@end
