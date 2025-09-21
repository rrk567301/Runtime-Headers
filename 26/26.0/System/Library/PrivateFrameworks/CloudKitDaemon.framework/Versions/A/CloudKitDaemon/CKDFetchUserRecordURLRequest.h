@class CKRecord;

@interface CKDFetchUserRecordURLRequest : CKDURLRequest

@property (retain, nonatomic) CKRecord *userRecord;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void).cxx_destruct;

@end
