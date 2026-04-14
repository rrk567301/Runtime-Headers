@class NSSet, NSString, NSXPCConnection, NSURL;

@interface CXXPCCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) BOOL hasVoIPBackgroundMode;

- (id)bundleURL;
- (id)localizedName;
- (BOOL)isConnected;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (int)processIdentifier;
- (id)initWithConnection:(id)a0;
- (BOOL)isPermittedToUsePublicAPI;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)init;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)vendorProtocolDelegate;
- (void)dealloc;

@end
