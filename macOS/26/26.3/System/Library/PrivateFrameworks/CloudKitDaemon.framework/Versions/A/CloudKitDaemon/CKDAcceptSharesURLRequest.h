@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAcceptedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutRequestProperties:(id)a0;
- (id)zoneIDsToLock;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (BOOL)requiresCKAnonymousSignature;
- (id)initWithOperation:(id)a0 shareMetadatasToAccept:(id)a1;

@end
