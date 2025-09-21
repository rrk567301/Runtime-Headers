@class NSMapTable, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface PXNetworkStatusMonitor : NSObject {
    NSObject<OS_nw_path_monitor> *_defaultPathMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_observers;
    struct { unsigned long long type; char isConstrained; char isExpensive; } queue_bestAvailableNetworkType;
}

@property (class, readonly) PXNetworkStatusMonitor *sharedInstance;

@property (readonly) struct { unsigned long long x0; char x1; char x2; } bestAvailableNetworkType;

- (id)init;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_queue_handlePathUpdate:(id)a0;
- (void)_queue_notifyObserversOfBestAvailableNetworkType:(struct { unsigned long long x0; char x1; char x2; })a0;

@end
