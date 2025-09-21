@class NSMutableArray;

@interface IMEventListenerList : NSObject {
    NSMutableArray *_eventListeners;
}

- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (id)init;
- (void)addObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;

@end
