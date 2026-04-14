@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _LSInstallationService : NSObject <NSXPCListenerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceQueue;
+ (void)beginListening;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0;

@end
