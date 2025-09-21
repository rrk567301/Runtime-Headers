@class NSArray;

@interface CKSyncEngineBatch : NSObject

@property (copy) NSArray *savedRecords;
@property (copy) NSArray *deletedRecordIDs;
@property (getter=isCustomBatch) char customBatch;
@property (readonly, copy) NSArray *recordsToSave;
@property (readonly, copy) NSArray *recordIDsToDelete;
@property (getter=isAtomic) char atomic;

+ (void)initialize;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;

@end
