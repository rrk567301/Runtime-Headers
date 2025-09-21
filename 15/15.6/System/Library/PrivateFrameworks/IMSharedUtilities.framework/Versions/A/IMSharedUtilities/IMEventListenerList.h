@class NSMutableArray;

@interface IMEventListenerList : NSObject {
    NSMutableArray *_eventListeners;
}

- (id)init;
- (void).cxx_destruct;
- (char)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeObject:(id)a0;

@end
