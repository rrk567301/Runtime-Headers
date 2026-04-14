@class NSArray, NSMutableDictionary;

@interface CKDLeaveSharesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *shareIDsToLeave;
@property (retain, nonatomic) NSMutableDictionary *shareIDByRequestID;
@property (copy, nonatomic) id /* block */ shareLeftBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)zoneIDsUsed;
- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shareIDsToLeave:(id)a1;

@end
