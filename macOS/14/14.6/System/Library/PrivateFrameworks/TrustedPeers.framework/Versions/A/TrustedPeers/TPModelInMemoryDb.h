@class NSMutableDictionary, NSMutableSet;

@interface TPModelInMemoryDb : NSObject <TPModelDBAdapterProtocol>

@property (retain, nonatomic) NSMutableDictionary *peersByID;
@property (retain, nonatomic) NSMutableSet *vouchers;

- (id)init;
- (void).cxx_destruct;
- (BOOL)enumeratePeersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)allPeerIDs:(id *)a0;
- (void)deletePeerWithID:(id)a0;
- (BOOL)enumerateVouchersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (unsigned long long)peerCount:(id *)a0;
- (id)peerWithID:(id)a0 error:(id *)a1;
- (void)registerPeerWithPermanentInfo:(id)a0;
- (void)registerVoucher:(id)a0;
- (BOOL)updatePeer:(id)a0 error:(id *)a1;
- (unsigned long long)voucherCount:(id *)a0;

@end
