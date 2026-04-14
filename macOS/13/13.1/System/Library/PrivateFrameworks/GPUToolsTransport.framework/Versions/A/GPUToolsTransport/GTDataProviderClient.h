@class GTDataProviderServiceXPCProxy, NSUUID, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GTDataProviderClient : NSObject {
    NSObject<OS_os_log> *_log;
    GTDataProviderServiceXPCProxy *_dataProvider;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_fragmentCompleteSemaphore;
    unsigned long long _nextHandle;
    NSUUID *_thisDeviceUUID;
}

- (id)init;
- (void).cxx_destruct;
- (void)transferData:(id)a0 overConnection:(id)a1 toDevice:(id)a2 completionHandler:(id /* block */)a3;
- (id)getDataProvider:(id)a0 deviceUUID:(id)a1;
- (unsigned long long)getNextHandle;

@end
