@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToRemove:(id)a1;

@end
