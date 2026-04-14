@interface CESOrganizerEntityWrapper : CESAttendeeEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (BOOL)delete:(id)a0;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (BOOL)deleteAllRecords;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (BOOL)shouldBatchPush;

@end
