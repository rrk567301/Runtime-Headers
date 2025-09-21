@interface CESOrganizerEntityWrapper : CESAttendeeEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (char)delete:(id)a0;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (char)deleteAllRecords;
- (char)shouldBatchPush;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;

@end
