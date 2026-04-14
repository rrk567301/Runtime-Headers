@class CKRecord;

@interface CKDFetchUserRecordURLRequest : CKDURLRequest

@property (retain, nonatomic) CKRecord *userRecord;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;

@end
