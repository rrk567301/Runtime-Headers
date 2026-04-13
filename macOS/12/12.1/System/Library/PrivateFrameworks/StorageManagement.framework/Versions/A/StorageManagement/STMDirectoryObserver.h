@interface STMDirectoryObserver : NSObject

@property (copy) id /* block */ callbackBlock;
@property struct __FSEventStream { } *fsEventStream;

+ (id)scheduledObserverForPaths:(id)a0 queue:(id)a1 eventFlags:(unsigned int)a2 latency:(double)a3 callBack:(id /* block */)a4;
+ (id)scheduledObserverForPaths:(id)a0 queue:(id)a1 callBack:(id /* block */)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0 onQueue:(id)a1 eventFlags:(unsigned int)a2 latency:(double)a3;

@end
