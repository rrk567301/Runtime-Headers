@class NSUUID, HMDAccessoryNetworkCredential, HMDAccessoryPairingEvent, HAPAccessoryServer;
@protocol MKFAccessory;

@interface HMDNewPairedAccessoryServerInfo : NSObject

@property (readonly) HAPAccessoryServer *server;
@property (readonly) NSUUID *primaryAccessoryUUID;
@property (readonly) id<MKFAccessory> hostAccessory;
@property (readonly) long long certificationStatus;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;

- (id)description;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 primaryAccessoryUUID:(id)a1 certificationStatus:(long long)a2 hostAccessory:(id)a3 networkCredential:(id)a4 pairingEvent:(id)a5;

@end
