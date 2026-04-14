@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (id)analyticsPayload;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;
- (void)main;
- (int)operationType;
- (void).cxx_destruct;

@end
