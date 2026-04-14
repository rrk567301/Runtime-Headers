@interface NSStackObservedValue : NSObservedValue

- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (void)setFinished:(BOOL)a0;
- (void)setValue:(id)a0;
- (void)setError:(id)a0;
- (oneway void)release;

@end
