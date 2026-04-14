@class NSData, CKRecordID;

@interface CKDFetchShareOwnerIdentityOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (nonatomic) long long ownerPublicKeyType;

+ (id)nameForState:(unsigned long long)a0;

- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (BOOL)makeStateTransition;
- (void).cxx_destruct;
- (void)_fetchOwnerIdentity;

@end
