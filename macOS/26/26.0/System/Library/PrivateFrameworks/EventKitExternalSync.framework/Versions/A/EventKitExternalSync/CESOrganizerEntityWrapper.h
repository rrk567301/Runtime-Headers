@interface CESOrganizerEntityWrapper : CESAttendeeEntityWrapper

+ (id)defaultWrapper;

- (id)fullName;
- (id)entityName;
- (long long)entityType;
- (BOOL)delete:(id)a0;
- (Class)recordClass;
- (BOOL)deleteAllRecords;
- (BOOL)shouldBatchPush;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;

@end
