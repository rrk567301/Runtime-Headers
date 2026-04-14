@class TPPeerPermanentInfo, NSString, NSSet, TPPeerStableInfo, TPPeerDynamicInfo;

@interface TPPeer : NSObject

@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) TPPeerPermanentInfo *permanentInfo;
@property (readonly, nonatomic) TPPeerStableInfo *stableInfo;
@property (readonly, nonatomic) TPPeerDynamicInfo *dynamicInfo;
@property (readonly, nonatomic) NSSet *trustedPeerIDs;

+ (id)calculateHmacWithHmacKey:(id)a0 permanentInfo:(id)a1 stableInfo:(id)a2 dynamicInfo:(id)a3;
+ (BOOL)verifyHMACWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2 hmacKey:(id)a3 hmacSig:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)calculateHmacWithHmacKey:(id)a0;
- (id)initWithPermanentInfo:(id)a0;
- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2;
- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2 error:(id *)a3;
- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2 hmacKey:(id)a3 hmacSig:(id)a4 error:(id *)a5;
- (id)peerWithUpdatedDynamicInfo:(id)a0 error:(id *)a1;
- (id)peerWithUpdatedStableInfo:(id)a0 error:(id *)a1;

@end
