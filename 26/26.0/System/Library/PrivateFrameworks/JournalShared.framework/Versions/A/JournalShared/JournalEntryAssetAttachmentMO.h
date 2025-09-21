@class NSData, JournalEntryAssetMO;

@interface JournalEntryAssetAttachmentMO : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic) short index;
@property (nonatomic, retain) JournalEntryAssetMO *asset;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
