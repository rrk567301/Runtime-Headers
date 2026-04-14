@class IDSBlastDoorInterfaceInternal;

@interface IDSBlastDoorInterface : NSObject

@property (retain, nonatomic) IDSBlastDoorInterfaceInternal *interface;

- (id)init;
- (void).cxx_destruct;
- (void)unpackPayloadDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackGeneralCommandPayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackCommandResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackCommandWebTunnelResponsePayload:(id)a0 resultHandler:(id /* block */)a1;

@end
