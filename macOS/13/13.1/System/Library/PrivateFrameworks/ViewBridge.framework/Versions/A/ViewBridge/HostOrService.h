@class NSString, NSDictionary, HostAndService, NSXPCConnection;

@interface HostOrService : NSObject {
    NSDictionary *_secBundleInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _secBundleInfoLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _applicationDisplayNameLock;
    NSString *_applicationDisplayName;
}

@property HostAndService *hostAndService;
@property (readonly) NSXPCConnection *connection;
@property (readonly) NSDictionary *secBundleInfo;
@property (readonly) struct __LSASN { } *applicationSerialNumber;
@property (readonly) NSString *applicationDisplayName;
@property (readonly) unsigned int window;

- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)a0;
- (void)invalidate:(id)a0;
- (void)didStealKeyboardFocus;
- (void)didReleaseKeyboardFocus;
- (void)didLoseKeyboardFocus;
- (id)quickDescription;
- (void)forEvent:(struct __CGEvent { } *)a0 invokeWithFlatEvent:(id /* block */)a1;
- (void)joinPair:(id)a0 reply:(id /* block */)a1 configure:(id /* block */)a2;
- (id)secBundleIdentifier;
- (void)post:(struct __CGEvent { } *)a0;
- (int)owningProcess:(int *)a0 forWindow:(unsigned int)a1;
- (BOOL)colorHasMeaningfulAlpha:(id)a0;

@end
