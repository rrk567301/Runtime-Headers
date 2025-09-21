@interface MPCAssistantPause : NSObject

- (void)pauseDevicesByUID:(id)a0 withRefId:(id)a1 audioRoutingInfo:(struct { char x0; char x1; char x2; char x3; })a2 source:(id)a3 completion:(id /* block */)a4;
- (void)pauseDevicesByUID:(id)a0 withRefId:(id)a1 audioRoutingInfo:(struct { char x0; char x1; char x2; char x3; })a2 completion:(id /* block */)a3;

@end
