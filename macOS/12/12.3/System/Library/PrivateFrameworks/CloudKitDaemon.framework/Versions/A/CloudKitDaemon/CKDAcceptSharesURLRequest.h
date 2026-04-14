@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAcceptedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (void)addSignatureForRequestOperation:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)zoneIDsToLock;
- (id)initWithOperation:(id)a0 shareMetadatasToAccept:(id)a1;

@end
