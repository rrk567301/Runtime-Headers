@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (id)analyticsPayload;
- (void)main;
- (int)operationType;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;
- (void).cxx_destruct;

@end
