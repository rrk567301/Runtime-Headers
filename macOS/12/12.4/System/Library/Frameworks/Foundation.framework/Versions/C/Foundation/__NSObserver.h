@class NSNotificationCenter, NSOperationQueue, NSString;

@interface __NSObserver : NSObject {
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id object;
    id /* block */ block;
}

- (void)dealloc;
- (id)name;
- (id)object;
- (void)_doit:(id)a0;

@end
