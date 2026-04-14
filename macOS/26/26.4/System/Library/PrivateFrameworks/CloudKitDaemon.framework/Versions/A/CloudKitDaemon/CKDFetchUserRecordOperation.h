@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (id)analyticsPayload;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;

@end
