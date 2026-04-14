@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToAdd:(id)a1;

@end
