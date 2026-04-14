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

- (void)xpcManagerConnectionInterrupted;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)updatedFoundDeviceList:(id)a0;
- (void).cxx_destruct;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)enableRemoteHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)enableHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
