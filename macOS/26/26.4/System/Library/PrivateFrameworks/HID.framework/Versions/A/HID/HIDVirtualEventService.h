@class HIDEventSystemClient, NSObject, HIDServiceClient;
@protocol OS_dispatch_queue, HIDVirtualEventServiceDelegate;

@interface HIDVirtualEventService : NSObject {
    _Atomic int _state;
}

@property (retain) HIDEventSystemClient *client;
@property (retain) HIDServiceClient *serviceClient;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long serviceID;
@property (weak) id<HIDVirtualEventServiceDelegate> delegate;

- (BOOL)dispatchEvent:(id)a0;
- (void)activate;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)setDispatchQueue:(id)a0;
- (void)dealloc;

@end
