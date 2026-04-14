@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAcceptedBlock;

- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)zoneIDsToLock;
- (void)fillOutRequestProperties:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousSignature;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shareMetadatasToAccept:(id)a1;

@end
