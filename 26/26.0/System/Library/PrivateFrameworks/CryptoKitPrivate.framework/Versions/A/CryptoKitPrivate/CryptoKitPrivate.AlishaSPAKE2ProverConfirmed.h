@class NSData;

@interface CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject

@property (nonatomic, readonly) NSData *alishaKey;
@property (nonatomic, readonly) NSData *KEnc;
@property (nonatomic, readonly) NSData *KMac;
@property (nonatomic, readonly) NSData *KRMac;
@property (nonatomic, readonly) NSData *SymmetricLTS;
@property (nonatomic, readonly) NSData *Kble_intro;
@property (nonatomic, readonly) NSData *Kble_oob_master;
@property (nonatomic, readonly) NSData *M2;

- (id)init;
- (void).cxx_destruct;

@end
