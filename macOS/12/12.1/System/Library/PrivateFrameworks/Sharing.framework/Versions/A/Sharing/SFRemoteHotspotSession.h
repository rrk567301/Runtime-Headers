@class NSString;
@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>

@property BOOL browsing;
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;
@property (weak, nonatomic) id<SFRemoteHotspotSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)xpcManagerConnectionInterrupted;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)enableHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeDedicatedCellularBearerWithCompletion:(id /* block */)a0;
- (void)updatedFoundDeviceList:(id)a0;
- (void)enableRemoteHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addDedicatedCellularBearer:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
