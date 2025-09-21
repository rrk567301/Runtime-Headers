@class NSString, NSUUID, NSData, JournalEntryAssetMO;

@interface JournalEntryAssetFileAttachmentMO : NSManagedObject

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) short index;
@property (nonatomic) BOOL isRemovedFromCloud;
@property (nonatomic) BOOL isUploadedToCloud;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL needsProcessing;
@property (nonatomic, copy) NSUUID *parentID;
@property (nonatomic, copy) NSData *recordSystemFields;
@property (nonatomic, retain) JournalEntryAssetMO *asset;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
