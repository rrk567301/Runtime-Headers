@class NSUUID, WrappedMergeableAppStorage, NSData;

@interface AppStorageMO : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) BOOL isUploadedToCloud;
@property (nonatomic, retain) WrappedMergeableAppStorage *mergeableAttributes;
@property (nonatomic, copy) NSData *recordSystemFields;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
