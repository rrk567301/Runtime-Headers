@interface _NSPlaceholderObservation : NSObservation

- (unsigned long long)retainCount;
- (id)retain;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (oneway void)release;

@end
