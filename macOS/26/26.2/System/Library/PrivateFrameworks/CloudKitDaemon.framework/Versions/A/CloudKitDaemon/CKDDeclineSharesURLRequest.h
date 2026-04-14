@class NSArray, NSMutableDictionary;

@interface CKDDeclineSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareMetadatasToDecline;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareDeclinedBlock;

- (void)fillOutRequestProperties:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shareMetadatasToDecline:(id)a1;

@end
