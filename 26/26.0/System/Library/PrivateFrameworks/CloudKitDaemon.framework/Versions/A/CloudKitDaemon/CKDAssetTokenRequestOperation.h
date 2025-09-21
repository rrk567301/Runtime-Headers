@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;

- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void).cxx_destruct;

@end
