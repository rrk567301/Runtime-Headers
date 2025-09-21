@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CPDHeadsetPropertiesService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    Class _headsetPropertiesClass;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithHeadsetPropertiesClass:(Class)a0;
- (id)initWithListener:(id)a0 headsetPropertiesClass:(Class)a1;

@end
