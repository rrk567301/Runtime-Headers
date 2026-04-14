@interface CRRIK : NSObject

@property (nonatomic) struct aks_ref_key_s { } *rk;

- (void)purge;
- (void)dealloc;
- (id)init;
- (struct aks_ref_key_s { } *)key;
- (BOOL)create;
- (id)keyBlob;
- (id)attestationBlob;
- (BOOL)createWithKeyBlob:(id)a0;
- (id)initWithKeyBlob:(id)a0;
- (id)pubKeyBlob;
- (id)sign:(id)a0;
- (BOOL)verify:(id)a0 signature:(id)a1;

@end
