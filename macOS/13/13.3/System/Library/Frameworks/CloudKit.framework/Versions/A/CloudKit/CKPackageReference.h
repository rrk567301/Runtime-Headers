@class _TtC8CloudKit16PackageReference;

@interface CKPackageReference : NSObject

@property (retain, nonatomic) _TtC8CloudKit16PackageReference *packageReference;

- (void).cxx_destruct;
- (id)recordID;
- (long long)databaseScope;
- (id)fieldName;
- (id)initWithRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (id)serializedDataAndError:(id *)a0;

@end
