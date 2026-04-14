@class NSUUID, WrappedMergeableJournalAttributes, NSData, NSDate, NSSet;

@interface JournalMO : NSManagedObject

@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) BOOL isUploadedToCloud;
@property (nonatomic, retain) WrappedMergeableJournalAttributes *mergeableAttributes;
@property (nonatomic, copy) NSData *recordSystemFields;
@property (nonatomic) short sortCategory;
@property (nonatomic) int sortOrder;
@property (nonatomic, copy) NSDate *updatedDate;
@property (nonatomic) BOOL userDeleted;
@property (nonatomic, retain) NSSet *entries;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
