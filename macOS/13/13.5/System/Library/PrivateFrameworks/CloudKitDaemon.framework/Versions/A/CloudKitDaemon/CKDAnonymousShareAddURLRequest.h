@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToAdd:(id)a1;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousUserIDs;

@end
