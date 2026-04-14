@interface ACFNetworkInterface : NSObject

@property (readonly) struct __SCNetworkInterface { } *ref;

+ (id)interfaceWithInterfaceRef:(struct __SCNetworkInterface { } *)a0;
+ (id)interfaceWithInterfaceRef:(struct __SCNetworkInterface { } *)a0 interfaceType:(id)a1;
+ (id)interfaceWithInterfaceType:(id)a0;

- (id)interfaceType;
- (id)MACAddress;
- (id)localizedDisplayName;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)initWithInterfaceType:(id)a0;
- (id)BSDName;
- (id)underlyingInterface;
- (id)initWithInterfaceRef:(struct __SCNetworkInterface { } *)a0;
- (id)initWithInterfaceRef:(struct __SCNetworkInterface { } *)a0 interfaceType:(id)a1;
- (id)supportedInterfaceTypes;
- (id)supportedProtocolTypes;
- (id)underlyingInterfaceForInterfaceType:(id)a0;

@end
