@class CKRecord;

@interface CKDFetchUserRecordURLRequest : CKDURLRequest

@property (retain, nonatomic) CKRecord *userRecord;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;

@end
