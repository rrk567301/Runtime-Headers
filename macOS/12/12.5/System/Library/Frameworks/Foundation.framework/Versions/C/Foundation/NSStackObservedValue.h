@interface NSStackObservedValue : NSObservedValue

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)setError:(id)a0;
- (void)setValue:(id)a0;
- (void)setFinished:(BOOL)a0;

@end
