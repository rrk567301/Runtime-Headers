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

- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isConnected;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleURL;
- (id)initWithConnection:(id)a0;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)bundleIdentifier;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (void)dealloc;
- (id)localizedName;

@end
