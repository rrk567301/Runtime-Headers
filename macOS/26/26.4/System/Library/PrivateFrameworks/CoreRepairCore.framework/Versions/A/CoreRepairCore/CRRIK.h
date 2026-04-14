@interface CRRIK : NSObject

@property (nonatomic) struct aks_ref_key_s { } *rk;

- (struct aks_ref_key_s { } *)key;
- (void)purge;
- (BOOL)create;
- (id)init;
- (void)dealloc;
- (id)keyBlob;
- (id)attestationBlob;
- (BOOL)createWithKeyBlob:(id)a0;
- (id)initWithKeyBlob:(id)a0;
- (id)pubKeyBlob;
- (id)sign:(id)a0;
- (BOOL)verify:(id)a0 signature:(id)a1;

@end
