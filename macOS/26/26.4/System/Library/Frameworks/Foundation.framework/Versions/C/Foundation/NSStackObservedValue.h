@interface NSStackObservedValue : NSObservedValue

- (id)autorelease;
- (id)retain;
- (void)setFinished:(BOOL)a0;
- (void)setError:(id)a0;
- (oneway void)release;
- (void)setValue:(id)a0;
- (unsigned long long)retainCount;

@end
