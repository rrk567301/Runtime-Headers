@class NSString, NSMutableArray, NSLock;

@interface ISServiceDelegate : NSObject <NSXPCListenerDelegate> {
    NSLock *_clientsLock;
    NSString *_serviceName;
}

@property (readonly) NSMutableArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (Class)clientInterfaceClass;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)client:(id)a0 didInterruptConnection:(id)a1;
- (void)client:(id)a0 didInvalidationConnection:(id)a1;

@end
