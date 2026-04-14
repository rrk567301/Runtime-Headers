@interface NSUIActivityResponderMonitor : NSObject

+ (id)sharedMonitor;

- (void)start;
- (void)update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (BOOL)updateWithResponder:(id)a0;

@end
