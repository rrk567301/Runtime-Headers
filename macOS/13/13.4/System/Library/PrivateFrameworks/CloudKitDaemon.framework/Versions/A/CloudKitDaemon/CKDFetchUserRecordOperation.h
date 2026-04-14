@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)analyticsPayload;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;

@end
