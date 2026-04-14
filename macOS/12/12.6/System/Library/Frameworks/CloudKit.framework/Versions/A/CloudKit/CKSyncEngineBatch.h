@class NSArray;

@interface CKSyncEngineBatch : NSObject

@property (nonatomic, getter=isAtomic) BOOL atomic;
@property (readonly, nonatomic) NSArray *recordsToSave;
@property (readonly, nonatomic) NSArray *recordIDsToDelete;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;

@end
