@class NSString, TSClockManager;

@interface TSClockManagerInterface : NSObject <TSClockManagerClient> {
    void /* function */ *_interruptionCallback;
    void *_interruptionRefcon;
}

@property (retain, nonatomic) TSClockManager *clockManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addToClockManager;
- (void)interruptedConnectionForClockManager:(id)a0;
- (void)removeFromClockManager;
- (void)setInterruptionCallback:(void /* function */ *)a0 andRefcon:(void *)a1;

@end
