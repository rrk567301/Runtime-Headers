@class NSSet, NSString, NSXPCConnection, NSURL;

@interface CXXPCCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) char hasVoIPBackgroundMode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithConnection:(id)a0;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)localizedName;
- (int)processIdentifier;
- (char)isConnected;
- (char)isPermittedToUseBluetoothAccessories;
- (char)isPermittedToUsePrivateAPI;
- (char)isPermittedToUsePublicAPI;
- (id)vendorProtocolDelegate;

@end
