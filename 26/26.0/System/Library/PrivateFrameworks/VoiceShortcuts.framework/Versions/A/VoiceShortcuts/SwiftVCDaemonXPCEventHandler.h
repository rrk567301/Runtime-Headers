@class NSArray;

@interface SwiftVCDaemonXPCEventHandler : NSObject {
    void /* function */ streams;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ streamForEvent;
}

@property (nonatomic, readonly) NSArray *streams;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
- (void)removeObserver:(id)a0 name:(id)a1;
- (void)activate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 selector:(SEL)a1 stream:(id)a2 eventName:(id)a3;
- (id)initWithStreams:(id)a0;
- (id)initWithStreams:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0 eventName:(id)a1;

@end
