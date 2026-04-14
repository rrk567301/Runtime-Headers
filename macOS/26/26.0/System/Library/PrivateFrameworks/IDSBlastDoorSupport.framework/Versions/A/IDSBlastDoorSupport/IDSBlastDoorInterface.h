@class IDSBlastDoorInterfaceInternal;

@interface IDSBlastDoorInterface : NSObject

@property (retain, nonatomic) IDSBlastDoorInterfaceInternal *interface;

- (void)unpackPayloadDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (id)init;
- (void)unpackClientMessage:(id)a0 context:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
