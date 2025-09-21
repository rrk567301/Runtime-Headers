@interface HAPPairingUtilities : HMFObject

+ (id)createAddPairingRequestForPairingIdentity:(id)a0 error:(id *)a1;
+ (id)createListPairingsRequest:(id *)a0;
+ (id)createRemovePairingRequestForPairingIdentity:(id)a0 error:(id *)a1;
+ (char)parseAddPairingResponse:(id)a0 error:(id *)a1;
+ (id)parseListPairingsResponse:(id)a0 error:(id *)a1;
+ (char)parseRemovePairingResponse:(id)a0 error:(id *)a1;

@end
