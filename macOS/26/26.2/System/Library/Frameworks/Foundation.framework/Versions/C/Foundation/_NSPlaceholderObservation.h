@interface _NSPlaceholderObservation : NSObservation

- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (oneway void)release;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;

@end
