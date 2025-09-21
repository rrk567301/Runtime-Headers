@interface GTReplayerOperation : NSOperation {
    id /* block */ _block;
    unsigned long long _uuid;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithBatch:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithRequestID:(unsigned long long)a0 withBlock:(id /* block */)a1;

@end
