@class NSMutableArray;

@interface IMEventListenerList : NSObject {
    NSMutableArray *_eventListeners;
}

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)init;

@end
