@interface NSUIActivityDocumentMonitor : NSObject

+ (id)sharedMonitor;

- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)update;

@end
