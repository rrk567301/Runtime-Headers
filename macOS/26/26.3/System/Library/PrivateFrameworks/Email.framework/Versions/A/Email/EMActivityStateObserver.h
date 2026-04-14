@interface EMActivityStateObserver : NSObject <EMActivityObserver> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)activityRegistry:(id)a0 startedActivity:(id)a1;

@end
