@class NSString, NSXPCListener;

@interface _NSPersistentUIStorageServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedListener;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (BOOL)setUpConnection:(id)a0;

@end
