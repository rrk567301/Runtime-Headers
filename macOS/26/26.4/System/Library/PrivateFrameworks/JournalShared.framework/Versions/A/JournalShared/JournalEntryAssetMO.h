@class JournalEntryMO, NSString, NSUUID, NSData, NSDate, NSSet;

@interface JournalEntryAssetMO : NSManagedObject

@property (nonatomic, copy) NSData *assetMetaData;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSString *fileAttachment;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) BOOL isBeingEdited;
@property (nonatomic) BOOL isFullyRemoved;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isRemovedFromCloud;
@property (nonatomic) BOOL isSlim;
@property (nonatomic) BOOL isUndoablyDeleted;
@property (nonatomic) BOOL isUploadedToCloud;
@property (nonatomic) short minimumSupportedAppVersion;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSUUID *parentID;
@property (nonatomic, copy) NSData *recordSystemFields;
@property (nonatomic) BOOL refreshAssetMetadata;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSDate *suggestionDate;
@property (nonatomic, copy) NSUUID *suggestionId;
@property (nonatomic, copy) NSData *title;
@property (nonatomic, retain) NSSet *dataAttachments;
@property (nonatomic, retain) JournalEntryMO *entry;
@property (nonatomic, retain) NSSet *fileAttachments;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
