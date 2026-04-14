@class NSMutableDictionary, NSMutableSet;

@interface TPModelInMemoryDb : NSObject <TPModelDBAdapterProtocol>

@property (retain, nonatomic) NSMutableDictionary *peersByID;
@property (retain, nonatomic) NSMutableSet *vouchers;

- (id)init;
- (void).cxx_destruct;
- (id)allPeerIDs;
- (void)deletePeerWithID:(id)a0;
- (void)enumeratePeersUsingBlock:(id /* block */)a0;
- (void)enumerateVouchersUsingBlock:(id /* block */)a0;
- (BOOL)hasAnyPeers;
- (id)peerWithID:(id)a0;
- (void)registerPeerWithPermanentInfo:(id)a0;
- (void)registerVoucher:(id)a0;
- (BOOL)updatePeer:(id)a0 error:(id *)a1;
- (unsigned long long)voucherCount;

@end
