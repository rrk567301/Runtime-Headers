@interface TPSNetworkPathMonitor : NSObject {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ serialTasks;
}

@property (class, nonatomic, readonly) TPSNetworkPathMonitor *sharedMonitor;

+ (BOOL)isNetworkError:(id)a0;

- (void)removeObserverForKey:(id)a0;
- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)addObserverForKey:(id)a0 using:(id /* block */)a1;

@end
