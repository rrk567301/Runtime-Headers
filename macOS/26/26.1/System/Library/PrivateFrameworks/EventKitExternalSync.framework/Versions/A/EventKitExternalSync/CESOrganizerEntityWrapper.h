@interface CESOrganizerEntityWrapper : CESAttendeeEntityWrapper

+ (id)defaultWrapper;

- (long long)entityType;
- (id)entityName;
- (id)fullName;
- (BOOL)delete:(id)a0;
- (Class)recordClass;
- (BOOL)deleteAllRecords;
- (BOOL)shouldBatchPush;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;

@end
