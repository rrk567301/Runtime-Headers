@class NSData, CKRecordID;

@interface CKDFetchShareOwnerIdentityURLRequest : CKDURLRequest

@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) long long publicKeyType;
@property (copy, nonatomic) id /* block */ ownerIdentityFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsUsed;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shareRecordID:(id)a1;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;

@end
