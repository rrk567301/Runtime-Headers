@class NSArray, NSMutableDictionary;

@interface CKDShareAccessRequestURLRequest : CKDURLRequest

@property (copy, nonatomic) NSArray *shareMetadatasToRequestAccess;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAccessRequestedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shareMetadatasToRequestAccess:(id)a1;

@end
