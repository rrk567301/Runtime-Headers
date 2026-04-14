@interface TPSNetworkPathMonitor : NSObject {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ serialTasks;
}

@property (class, nonatomic, readonly) TPSNetworkPathMonitor *sharedMonitor;

+ (BOOL)isNetworkError:(id)a0;

- (void)stop;
- (void)removeObserverForKey:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (id)init;
- (void)addObserverForKey:(id)a0 using:(id /* block */)a1;

@end
