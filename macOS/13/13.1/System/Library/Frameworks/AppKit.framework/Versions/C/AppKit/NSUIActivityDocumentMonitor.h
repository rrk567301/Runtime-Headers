@interface NSUIActivityDocumentMonitor : NSObject

+ (id)sharedMonitor;

- (void)update;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;

@end
