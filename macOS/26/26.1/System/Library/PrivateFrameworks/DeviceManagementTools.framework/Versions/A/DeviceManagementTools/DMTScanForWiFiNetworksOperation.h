@class NSSet, DMTNetworkCredential, NSObject;
@protocol OS_dispatch_queue, DMTScanForWiFiNetworksOperationDelegate, DMTWiFiScanningPrimitives;

@interface DMTScanForWiFiNetworksOperation : CATOperation

@property (readonly, nonatomic) id<DMTWiFiScanningPrimitives> primitives;
@property (weak, nonatomic) id<DMTScanForWiFiNetworksOperationDelegate> delegate;
@property (readonly, nonatomic) unsigned long long scanIntervalInSeconds;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *scanningQueue;
@property (retain, nonatomic) NSSet *foundWiFiNetworks;
@property (readonly, copy, nonatomic) DMTNetworkCredential *credential;

- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)fetchAvailableWiFiNetworks;
- (id)initWithPrimitives:(id)a0 credential:(id)a1 delegate:(id)a2;
- (id)initWithPrimitives:(id)a0 credential:(id)a1 delegate:(id)a2 scanIntervalInSeconds:(unsigned long long)a3;
- (BOOL)powerOnWiFiInterfaceWithError:(id *)a0;
- (void)startScanningForNetworks;

@end
