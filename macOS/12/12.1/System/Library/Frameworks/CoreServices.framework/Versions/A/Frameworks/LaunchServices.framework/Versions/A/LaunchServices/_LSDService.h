@class NSString, NSXPCListener;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (class, readonly, getter=isEnabled) BOOL enabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)XPCConnectionIsAlwaysPrivileged;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (id)dispatchQueue;
+ (id)XPCConnectionToService;
+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithXPCListener:(id)a0;

@end
