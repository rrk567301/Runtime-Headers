@class NSString, Protocol;

@interface CalXPCConnectionInfo : NSObject

@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) Protocol *remoteObjectProtocol;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) Protocol *exportedObjectProtocol;
@property (copy, nonatomic) NSString *lifecycleNotification;

+ (id)infoForMachServiceName:(id)a0 remoteObjectProtocol:(id)a1 exportedObject:(id)a2 exportedObjectProtocol:(id)a3 lifecycleNotification:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasRequiredFields;
- (id)initWithMachServiceName:(id)a0 remoteObjectProtocol:(id)a1 exportedObject:(id)a2 exportedObjectProtocol:(id)a3 lifecycleNotification:(id)a4;

@end
