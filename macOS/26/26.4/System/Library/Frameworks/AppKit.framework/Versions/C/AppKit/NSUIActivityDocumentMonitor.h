@interface NSUIActivityDocumentMonitor : NSObject

+ (id)sharedMonitor;

- (void)stop;
- (void)update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)start;

@end
